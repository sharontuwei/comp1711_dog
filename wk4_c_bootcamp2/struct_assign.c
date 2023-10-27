#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main () {
    struct student new_student;
    strcpy(new_student.name, "Name Surname");
    strcpy(new_student.student_id, "2902901");
    new_student.mark = 35;
    //scanf("Input mark: %u", &new_student.mark);

    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Mark: %u\n", new_student.mark);

    return 0;
}