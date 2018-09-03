#include <stdio.h>
#include "student.h"


int main(int argc, char const *argv[])
{
	_student student;

	input_student(&student);
	print_student(student);

	return 0;
}