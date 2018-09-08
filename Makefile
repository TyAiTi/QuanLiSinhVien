program: program.o student.o date.o utils.o
	gcc -o program program.o student.o date.o utils.o
utils.o: utils.c
	gcc -c utils.c
date.o: date.c
	gcc -c date.c
student.o: student.c 
	gcc -c student.c
program.o: program.c
	gcc -c program.c