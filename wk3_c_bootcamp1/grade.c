#include <stdio.h>

int main (){
    int grade;
    printf("Input grade: ");
    scanf("%d", &grade);

    if (grade >= 0 && grade < 50){
        printf("%d is a fail.\n", grade);
    }
    else if (grade >= 50 && grade < 70){
        printf("%d is a pass.\n", grade);
    }
    else if (grade >= 70 && grade <= 100){
        printf("%d is a distinction.\n", grade);
    }
    else{
        printf("Invalid grade input.\n");
    }
    return 0;
}