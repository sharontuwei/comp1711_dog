#include <stdio.h>

int main () {
    int var1;
    int var2;
    printf("Insert a number for the length: ");
    scanf("%d", &var1);
    printf("Insert a number for the width: ");
    scanf("%d", &var2);
    int A = var1*var2;
    printf("The area is %d\n", A);
    return 0;
}