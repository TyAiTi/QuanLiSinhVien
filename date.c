#include <stdio.h>
#include "date.h"


void input_date(_date *date) {
	printf("Nhap ngay: ");
	scanf("%d", &date->date);
	printf("Nhap thang: ");
	scanf("%d", &date->month);
	printf("Nhap nam: ");
	scanf("%d", &date->year);
}

void print_date(_date date) {
	printf("%d/%d/%d", date.date, date.month, date.year);
}