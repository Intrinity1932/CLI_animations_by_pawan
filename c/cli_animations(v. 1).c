// cli_animations_by_pawan.c
// Pure C version of CLI animation library

#include <stdio.h>
#include <unistd.h>

// ---------- Base helpers ----------
void base_animation(const char str[]) {
    for (int i = 0; i < 5; i++) {
        printf("%c", str[i]);
        printf("\033[1D");
        fflush(stdout);
        usleep(555555);
    }
}

void bracket_door_animation(const char str[]) {
    for (int i = 0; i < 12; i += 4) {
        printf("%c%c%c%c", str[i], str[i+1], str[i+2], str[i+3]);
        printf("\033[4D");
        fflush(stdout);
        usleep(555555);
    }
}

// ---------- Animations ----------
void rotating_slash() {
    char str[7] = "-\\|/-";
    base_animation(str);
}

void ball_bounce() {
    char str[7] = "_oOo_";
    base_animation(str);
}

void bracket_dance() {
    char str[11] = "--()[]{}<>";
    for (int i = 0; i < 10; i += 2) {
        printf("%c%c", str[i], str[i+1]);
        printf("\033[2D");
        fflush(stdout);
        usleep(555555);
    }
}

void count() {
    for (int i = 0; i < 10; i++) {
        printf("%d", i);
        printf("\033[D");
        fflush(stdout);
        usleep(555555);
    }
}

void count_reverse() {
    for (int i = 9; i > -1; i--) {
        printf("%d", i);
        printf("\033[D");
        fflush(stdout);
        usleep(555555);
    }
}

void eyes_1() {
    char str[10] = "O_O-_-O_O";
    for (int i = 0; i < 9; i += 3) {
        printf("%c%c%c", str[i], str[i+1], str[i+2]);
        printf("\033[3D");
        fflush(stdout);
        usleep(555555);
    }
}

void eyes_2() {
    char str[10] = "O_O>_<O_O";
    for (int i = 0; i < 9; i += 3) {
        printf("%c%c%c", str[i], str[i+1], str[i+2]);
        printf("\033[3D");
        fflush(stdout);
        usleep(555555);
    }
}

void eyes_3() {
    char str[16] = "O_O>_<-_->_<O_O";
    for (int i = 0; i < 15; i += 3) {
        printf("%c%c%c", str[i], str[i+1], str[i+2]);
        printf("\033[3D");
        fflush(stdout);
        usleep(555555);
    }
}

void bracket_door_1() {
    char str[13] = "(  ) () (  )";
    bracket_door_animation(str);
}

void bracket_door_2() {
    char str[13] = "[  ] [] [  ]";
    bracket_door_animation(str);
}

void bracket_door_3() {
    char str[13] = "{  } {} {  }";
    bracket_door_animation(str);
}
