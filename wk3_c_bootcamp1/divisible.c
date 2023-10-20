#include <stdio.h>

int main (){
    int var;
    printf("Input number: ");
    scanf("%d", &var);

    if (var % 4 == 0 && var % 5 == 0 ){
        printf("%d is divisible by both 4 and 5.\n", var);
    }
    else {
        printf("%d is not divisible by both 4 and 5.\n", var);
    }
    return 0;
}