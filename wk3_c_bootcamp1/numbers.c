#include <stdio.h>

int main(){
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    if (number > 0){
        printf("%d is postive.\n", number);
    }
    else if (number < 0){
        printf("%d is negative.\n", number);
    }
    else if (number == 0){
        printf("%d is zero.\n", number);
    }
    else {
        printf("Invalid input.\n");
    }
return 0;
}