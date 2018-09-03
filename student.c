#include <stdio.h>
#include "student.h"


void input_student(_student *student) {
	printf("This is the prototype for input_student\n");
	input_date(&student->date_of_birth);
}


void print_student(_student student) {
	printf("This is the prototype for print_student\n");
	print_date(student.date_of_birth);
}