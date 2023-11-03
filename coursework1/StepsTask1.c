#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {
    char filename[] = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL){
        perror ("");
        return 1;
    }
    int line_size = 1000;
    char line[line_size];
    int count = 0;
    while (fgets(line, line_size, file)){
        count++;
    }
    printf("Number of records in file: %d\n", count);


    char date[11];
    char time[6];
    char step[10];
    

    int a;
    FITNESS_DATA fitness_data[1000];
    char *dates[1000];
    char *times[1000];
    while(fgets(line, line_size, file)){
        tokeniseRecord(line, ",", date, time, step);
        int steps;
        steps = atoi(step);
        for(a = 0; a < 3; a++){
            strcpy(fitness_data[a].date, dates[a]);
            strcpy(fitness_data[a].time, times[a]);
            fitness_data[a].steps;
        }
    }

    for(a = 0; a < 3; a++){
        printf("%s/", fitness_data[a].date);
        printf("%s/", fitness_data[a].time);
        printf("%d\n", fitness_data[a].steps);
    }
    
    fclose(file);
    return 0;
}