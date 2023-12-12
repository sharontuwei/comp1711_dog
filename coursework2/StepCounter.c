#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


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
    char option;
     printf("Menu options: \n");

    printf("A: Specify the filename to be imported\n");
    printf("B: Display the total number of records in the file\n");
    printf("C: Find the date and time of the timeslot with the fewest steps\n");
    printf("D: Find the date and time of the timeslot with the largest number of steps\n");
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n");


    printf("Select an option: ");
    scanf("%c", &option);

    

    /*FILE *file = fopen("FitnessData_2023.csv", "r");
    if (file == NULL){
        printf("Error: could not open file.\n");
        return 1;
    }*/

    printf("Input filename: ");
        char filename[100];
        scanf("%s", filename);
        FILE *file;
        file = fopen(filename, "r");
        
        if (file == NULL){
            printf("Error: could not open file.\n");
            return 1;
        }
        
        
    int line_size = 1000;
    char line[line_size];

    int count = 0;
    int a = 0;
    int mean = 0;
    int sum = 0;
    int max = 0;
    int min = 0;
    int periodstart;
    int currentperiod;
    int longperiodstart;
    int longperiod;

    char date[11];
    char time[6];
    char step[10];

    FITNESS_DATA fitness_data[1000];
    while(fgets(line, line_size, file)){
    count++;
    tokeniseRecord(line, ",", date, time, step);
    strcpy(fitness_data[a].date, date);
    strcpy(fitness_data[a].time, time);
    int steps;
    steps = atoi(step);
    fitness_data[a].steps = steps;
    a++;}

    for (a=0; a<1; a++){
        max = fitness_data[a].steps;
    }
    for (a=1; a<count; a++){
        if (fitness_data[a].steps > max){
            max = fitness_data[a].steps;
        }
    }
    for (a=0; a<1; a++){
        min = fitness_data[a].steps;
    }
    for (a=1; a<count; a++){
        if (fitness_data[a].steps < min){
            min = fitness_data[a].steps;
        }
    }


    switch(option){
        case 'A': 
        printf("Input filename: ");
        char filename[100];
        scanf("%s", filename);
        FILE *file;
        file = fopen(filename, "r");
        
        if (file == NULL){
            printf("Error: could not open file.\n");
            return 1;
        }
        else {
            printf("File successfully loaded.\n");
        }
        break;
                
        case 'B':
        printf("Total records: %d\n", count);
        break;

        case 'C':
       for (a=0; a<count; a++){
            if (fitness_data[a].steps == min){
                printf("Fewest steps: %s %s\n", fitness_data[a].date, fitness_data[a].time);
            }
            
       }
        break;

        case 'D':
        for (a=0; a<count; a++){
            if (fitness_data[a].steps == max){
                printf("Largest steps: %s %s\n", fitness_data[a].date, fitness_data[a].time);
            }
        }
        break;

        case 'E':
        for (a=0; a<count; a++){
            sum += fitness_data[a].steps;
        }
        int mean = sum/count;
        printf("Mean step count: %d\n", mean);
        break;

        case 'F':
        periodstart=-1;
        currentperiod=0;
        longperiodstart=-1;
        longperiod=0;

        for (a=0; a<count; a++){
            if (fitness_data[a].steps>500){
                if (periodstart==-1){
                    periodstart=a;
                }
                currentperiod++;
            }
            else{
                if(currentperiod>longperiod){
                    longperiod=currentperiod;
                    longperiodstart=periodstart;
                }
                periodstart=-1;
                currentperiod=0;
            }
        }
        if(longperiodstart!=-1){
            printf("Longest period start: %s %s\n", fitness_data[longperiodstart].date,fitness_data[longperiodstart].time);
            printf("Longest period end: %s %s\n", fitness_data[longperiodstart+longperiod-1].date,fitness_data[longperiodstart+longperiod-1].time);
        }
        break;

        case 'Q':
        break;

        default :
        printf("Invalid choice. Try again.\n");

        char choice;
        printf("Menu options: \n");

        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");

        printf("Select an option: \n");
    }
    fclose(file);
    return 0;

}
