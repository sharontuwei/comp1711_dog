#include <stdio.h>

int volumeSphere(float r, float p, float c){
    float answer;
    answer = c * p * r * r * r;
    return answer;
}

int main(){
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float pi = 3.142;
    float constant = 1.333;
    float area = volumeSphere(radius, pi, constant);

    printf("The area of the sphere is %.4f.\n", area);
}