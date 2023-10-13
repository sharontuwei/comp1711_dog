#include <stdio.h>

int main(){
    int a = 1;
    while (a <= 10){
        int square = a*a;
        printf("The result is %d\n",square);
        a++;
    }
    return 0;
}