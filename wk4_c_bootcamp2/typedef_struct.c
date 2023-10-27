#include <stdio.h>

typedef struct{
    char name[20];
    char student_id[11];
    unsigned mark;
}STUDENT;

int main () {
    int number_of_students = 10, i;
    STUDENT students [] = {
        {"Alice Smith",    "64827593", 67},
        {"Bob Johnson",    "19374650", 89},
        {"Charlie Brown",  "82056914", 76},
        {"David Davis",    "45790182", 44},
        {"Eve Wilson",     "36102478", 91},
        {"Frank Anderson", "93571826", 53},
        {"Grace Lee",      "50249867", 78},
        {"Hannah Clark",   "74820591", 62},
        {"Isaac Harris",   "61093745", 89},
        {"Jack White",     "92847501", 72},
    };
    for (i=0; i<number_of_students; i++){
        printf("{"Alice Smith",    "64827593", 67}\n,
        {"Bob Johnson",    "19374650", 89}\n,
        {"Charlie Brown",  "82056914", 76}\n,
        {"David Davis",    "45790182", 44}\n,
        {"Eve Wilson",     "36102478", 91}\n,
        {"Frank Anderson", "93571826", 53}\n,
        {"Grace Lee",      "50249867", 78}\n,
        {"Hannah Clark",   "74820591", 62}\n,
        {"Isaac Harris",   "61093745", 89}\n,
        {"Jack White",     "92847501", 72},");
        printf("Student Name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
        printf("Mark: %u\n", students[i].mark);

    }
    /*printf("{"Alice Smith",    "64827593", 67},
        {"Bob Johnson",    "19374650", 89},
        {"Charlie Brown",  "82056914", 76},
        {"David Davis",    "45790182", 44},
        {"Eve Wilson",     "36102478", 91},
        {"Frank Anderson", "93571826", 53},
        {"Grace Lee",      "50249867", 78},
        {"Hannah Clark",   "74820591", 62},
        {"Isaac Harris",   "61093745", 89},
        {"Jack White",     "92847501", 72},");*/
    return 0;
}