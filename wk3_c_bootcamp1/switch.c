#include <stdio.h>

int main (){
    int mark;
    mark = -2;

    switch (mark){
        case 0: printf("0 has been selected.\n");
        break;
        case 1: printf("1 has been selected.\n");
        break;
        case 2: printf("2 has been selected.\n");
        break;
        default: printf("A different option has been selected.\n");
    }
    return 0;
}