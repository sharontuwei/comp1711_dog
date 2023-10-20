#include <stdio.h>

float sum(int a, int b){
    int answer;
    answer = a + b;
    return answer;
}

int main(){
    int y = 2;
    float z = sum(y, 5);

    printf("The sum of y and %d is %.2f.\n", y, z);
}