#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}

//int cmpfunc (const void * a, const void * b){
    //return (*(int*)a - *(int*)b);
//}

int main() {
    printf("Input filename: ");
    char filename[100];
    scanf("%s", filename);
    FILE *file;
    file = fopen(filename, "r");
        
    if (file == NULL){
        printf("Error: invalid file.\n");
        return 1;
    }

    int line_size = 1000;
    char line[line_size];

    int count = 0;
    int a = 0;

    char date[11];
    char time[6];
    //char step[10];
    int steps;
    char del = ',';
    int i = 0;
    int j;
    int temp;

    FitnessData fitness_data[1000];
    while(fgets(line, line_size, file)){
    count++;
    tokeniseRecord(line, del, date, time, &steps);
    strcpy(fitness_data[a].date, date);
    strcpy(fitness_data[a].time, time);
    fitness_data[a].steps = steps;
    a++;}

    for (a=0; a<count; a++){
        if (fitness_data[a].steps == i){
            printf("%d\n", i);
        }
      // printf("%d\n", fitness_data[a].steps);
    }

    //printf("%d\n", fitness_data[i].steps);

    
    fclose(file);
    return 0;
}