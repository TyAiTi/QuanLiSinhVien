program: program.o student.o date.o
	gcc -o program program.o student.o date.o
date.o: date.c
	gcc -c date.c
student.o: student.c date.o
	gcc -c student.c date.o
program.o: program.c
	gcc -c program.c