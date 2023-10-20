#include <stdio.h>

int main(){
    int option;
    printf("Input your menu choice ranging from 1 to 5: ");
    scanf("%d", &option);

    switch (option){
        case 1: printf("Chicken has been selected.\n");
        break;
        case 2: printf("Steak has been selected.\n");
        break;
        case 3: printf("Fish has been selected.\n");
        break;
        case 4: printf("Mince has been selected.\n");
        break;
        case 5: printf("Veggie has been selected.\n");
        break;
        default: printf("Invalid choice.\n");
    }
    return 0;
}