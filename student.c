#include <stdio.h>
#include "utils.h"
#include "student.h"



void input_student(_student *student) {
    printf("Nhap ma so sinh vien: ");
    input_string(student->id, sizeof(student->id));
    printf("Nhap ho ten: ");
    input_string(student->fullname, sizeof(student->fullname));
    printf("Nhap que quan: ");
    input_string(student->from, sizeof(student->from));

    printf("Nhap ngay thang nam sinh:\n");
    input_date(&student->date_of_birth);
}


void print_student(_student student) {
    printf("THONG TIN SINH VIEN\n");
    printf("+ Ma so: %s\n", student.id);
    printf("+ Ho ten: %s\n", student.fullname);
    printf("+ Que quan: %s\n", student.from);
    printf("+ Ngay sinh: ");
    print_date(student.date_of_birth);
    printf("\n");
}
