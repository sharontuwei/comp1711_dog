#include <stdio.h>

int main () {
    int var, factorial=1;
    scanf("%d", &var);
    for (int i=1; i<=var;i++){
        factorial*=i;
    }
    printf("Factorial is %d", factorial);
    return 0;
}