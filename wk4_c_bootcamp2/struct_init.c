#include <stdio.h>

struct student{
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main () {
    struct student new_student = {"Name Surname", "2902902901", 35};
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Mark: %u\n", new_student.mark);
    //struct student new_student = {.name = "Name Surname", .student_id = "2902902901", .mark = 35};
    return 0;
}