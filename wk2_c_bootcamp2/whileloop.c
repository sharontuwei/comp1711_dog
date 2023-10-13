#include <stdio.h>

int main(){
    int a = 0;
    while (a < 5) {
        printf("a = %d\n",a);
        a++;
    }
    printf("I've finished the loop and a = %d\n", a);
    return 0;
}