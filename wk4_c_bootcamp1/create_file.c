#include <stdio.h>

int main () {
    char filename[] = "data.txt";
    FILE *file = fopen(filename, "w");
if (file == NULL){
    perror("");
    return 1;
}
    fprintf(file, "Hello world!\n");
    fclose(file);
    return 0;
}