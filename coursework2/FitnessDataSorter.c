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

int cmpfunc (const void * c, const void * d){
    int x = *(int*)c;
    int y = *(int*)d;

    if (x<y){
        return 1;
    }
    else if (x>y){
        return -1;
    }
    return 0;
}

int main() {
    printf("Input filename: ");
    char filename[100];
    scanf("%s", filename);
    FILE *file;
    file = fopen(filename, "r");
        
    if (file == NULL){
        perror("Error: invalid file.\n");
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

    FitnessData fitness_data[1000];
    while(fgets(line, line_size, file)){
    count++;
    tokeniseRecord(line, del, date, time, &steps);
    strcpy(fitness_data[a].date, date);
    strcpy(fitness_data[a].time, time);
    fitness_data[a].steps = steps;
    a++;}

    qsort(fitness_data, count, sizeof(*fitness_data), cmpfunc);

    char new_file[1000];
    snprintf(new_file, sizeof(new_file), "%s.tsv", filename);

    FILE *newfile;
    newfile = fopen(new_file, "w");
    if (newfile == NULL){
        perror("Error: invalid file.\n");
        return 1;
    }

    fprintf(newfile, "Date\tTime\tSteps\n");
    for (a=0; a<count; a++){
        fprintf(newfile, "%s\t%s\t%d\n", fitness_data[a].date, fitness_data[a].time, fitness_data[a].steps);
    }

    fclose(newfile);

    printf("Data sorted and written to %s\n", new_file);
    
    fclose(file);
    return 0;
}