#include <stdio.h>

int circleArea(float r, float p){
    float answer = p * r * r;
    return answer;
}

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float pi = 3.142;
    float area = circleArea(radius, pi);

    printf("The area of the circle is %.2f.\n", area);

}