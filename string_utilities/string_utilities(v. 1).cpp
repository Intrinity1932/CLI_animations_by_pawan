#include <iostream>
#include <unistd.h>

class string_utilities_by_pawan
{
public:
    void highlight(std::string str){
        std::cout << "\033[48;5;7m" << str << "\033[0m" << std::flush;
    }

    void animate(std::string str){
        for(int i=0; str[i]!='\0'; i++){
            std::cout << str[i] << std::flush;
            usleep(55555);
        }
    }

    void underline(std::string str){
        std::cout << "\033[4m" << str << "\033[0m" << std::flush;
    }

    void bold(std::string str){
        std::cout << "\033[1m" << str << "\033[0m" << std::flush;
    }

    void italic(std::string str){
        std::cout << "\033[3m" << str << "\033[0m" << std::flush;
    }

    void dance(std::string str){
        std::string temp_str = str;
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]>=97 && str[i]<=122)str[i]-=32;
            std::cout << str[i] << std::flush << "\033[1D";
            usleep(55555);
            if(str[i]>=65 && str[i]<=90)str[i]+=32;
            std::cout << str[i] << std::flush;
        }
        std::cout << "\033[" << temp_str.length() << "D" << temp_str;
    }

    void bracket_1(std::string str){
        std::string brac="()";
        bracket(str, brac);
    }void bracket_2(std::string str){
        std::string brac="[]";
        bracket(str, brac);
    }void bracket_3(std::string str){
        std::string brac="{}";
        bracket(str, brac);
    }void bracket_4(std::string str){
        std::string brac="||";
        bracket(str, brac);
    }void bracket_5(std::string str){
        std::string brac="<>";
        bracket(str, brac);
    }

    void double_bracket_1(std::string str){
        std::string brac="(())";
        double_bracket(str, brac);
    }void double_bracket_2(std::string str){
        std::string brac="[[]]";
        double_bracket(str, brac);
    }void double_bracket_3(std::string str){
        std::string brac="{{}}";
        double_bracket(str, brac);
    }void double_bracket_4(std::string str){
        std::string brac="||||";
        double_bracket(str, brac);
    }void double_bracket_5(std::string str){
        std::string brac="<<>>";
        double_bracket(str, brac);
    }

    void extra_effect(std::string str){
        int i,j;
        for(i=0; str[i]!='\0'; i++){
            std::cout << "!" << "\033[1D" << std::flush;
            usleep(111111);
            std::cout << "@" << "\033[1D" << std::flush;
            usleep(99999);
            std::cout << "#" << "\033[1D" << std::flush;
            usleep(88888);
            std::cout << "$" << "\033[1D" << std::flush;
            usleep(77777);
            std::cout << "%" << "\033[1D" << std::flush;
            usleep(66666);
            std::cout << "^" << "\033[1D" << std::flush;
            usleep(55555);
            std::cout << "&" << "\033[1D" << std::flush;
            usleep(44444);
            std::cout << str[i] << std::flush;
            usleep(33333);
        }
    }

    void slide(std::string str){
        int i, j, len;
        len=str.length();
        std::cout << "\033[1C";
        for(i=len; i>=0; i--){
            for(j=i; j<len; j++){
                std::cout << str[j] << std::flush;
            }
            std::cout << "\033[" << (len - i) << "D";
            usleep(55555);
        }
        std::cout << "\033[" << len << "C";
    }
        

private:
    void bracket(std::string str, std::string brac){
        int i;
        std::cout << brac[0];
        for(i=0; str[i]!='\0'; i++){
            std::cout << str[i];
            std::cout << brac[1] << "\033[1D" << std::flush;
            usleep(55555);
        }
        std::cout << "\033[1C";
    }void double_bracket(std::string str, std::string brac){
        int i;
        std::cout << brac[0] << brac[1];
        for(i=0; str[i]!='\0'; i++){
            std::cout << str[i];
            std::cout << brac[2] << brac[3] << "\033[2D" << std::flush;
            usleep(55555);
        }
        std::cout << "\033[2C";
    }

}string;
