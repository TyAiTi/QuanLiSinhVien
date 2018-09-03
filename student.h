#ifndef STUDENT_H
#define STUDENT_H

#include "date.h"

typedef struct {
    char id[10];
    char fullname[50];
    _date date_of_birth;
    char from[100];
} _student;

void input_student(_student *student);
void print_student(_student student);

#endif