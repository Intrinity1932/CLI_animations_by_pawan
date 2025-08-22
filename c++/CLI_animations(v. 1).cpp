#include <iostream>
#include <unistd.h>

class cli_animations_by_pawan
{
public:
    void rotating_slash(){
        int i;
        char str[7]="-\\|/-";
        base_animation(str);
    }

    void ball_bounce(){
        int i;
        char str[7]="_oOo_";
        base_animation(str);
    }

    void bracket_dance(){
        int i;
        char str[11]="--()[]{}<>";

        for(i=0; i<10; i+=2){
            std::cout << str[i] << str[i+1];
            std::cout << "\033[2D" << std::flush;
            usleep(555555);
        }
    }

    void count(){
        for(int i=0; i<10; i++){
            std::cout << i;
            std::cout << "\033[D" << std::flush;
            usleep(555555);
        }
    }

    void count_reverse(){
        for(int i=9; i>-1; i--){
            std::cout << i;
            std::cout << "\033[D" << std::flush;
            usleep(555555);
        }
    }

    void eyes_1(){
        int i;
        char str[10]="O_O-_-O_O";

        for(i=0; i<9; i+=3){
            std::cout << str[i] << str[i+1] << str[i+2];
            std::cout << "\033[3D" << std::flush;
            usleep(555555);
        }
    }

    void eyes_2(){
        int i;
        char str[10]="O_O>_<O_O";

        for(i=0; i<9; i+=3){
            std::cout << str[i] << str[i+1] << str[i+2];
            std::cout << "\033[3D" << std::flush;
            usleep(555555);
        }
    }

    void eyes_3(){
        int i;
        char str[16]="O_O>_<-_->_<O_O";

        for(i=0; i<15; i+=3){
            std::cout << str[i] << str[i+1] << str[i+2];
            std::cout << "\033[3D" << std::flush;
            usleep(555555);
        }
    }

    void bracket_door_1(){
        int i;
        char str[13]="(  ) () (  )";
        bracket_door_animation(str);
    }

    void bracket_door_2(){
        int i;
        char str[13]="[  ] [] [  ]";
        bracket_door_animation(str);
    }

    void bracket_door_3(){
        int i;
        char str[13]="{  } {} {  }";
        bracket_door_animation(str);
    }

private:
    void base_animation(char str[]){
        for(int i=0; i<5; i++){
            std::cout << str[i];
            std::cout << "\033[1D" << std::flush;
            usleep(555555);
        }
    }
    void bracket_door_animation(char str[]){
        for(int i=0; i<12; i+=4){
            std::cout << str[i] << str[i+1] << str[i+2] << str[i+3];
            std::cout << "\033[4D" << std::flush;
            usleep(555555);
        }
    }

}animation;
