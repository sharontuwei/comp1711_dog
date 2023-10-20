#include <stdio.h>

float sum(float a, float b){
    float answer = a + b;
    return answer;
}

int main(){
    float y = 2;
    float z = sum(y, 5);

    printf("The sum of y and %.2f is %.1f.\n", y, z);

}