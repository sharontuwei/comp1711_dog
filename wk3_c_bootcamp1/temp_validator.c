#include <stdio.h>

int main (){
    float var;
    printf("Input temperature: ");
    scanf("%f", &var);

    if(var >= -10 && var <= 40){
        printf("%f is within temperature range.\n", var);
    }
    else {
        printf("Exceeded temperature range.\n");
    }
    return 0;
}