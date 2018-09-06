#include <stdio.h>
#include "student.h"



void input_student(_student *student) {
	printf("This is the prototype for input_student\n");
	printf("Nhap id: ");
	scanf("%s", student->id);
	printf("Nhap full name: ");
	scanf("%s", student->fullname);
	printf("Nhap que quan: ");
	scanf("%s", student->from);
	printf("Nhap ngay thang nam sinh: ");
	input_date(&student->date_of_birth);


}


void print_student(_student student) {
	printf("This is the prototype for print_student\n");
	printf("%s\n", student.id);
	printf("%s\n", student.fullname);
	printf("%s\n", student.from);
	print_date(student.date_of_birth);
}


