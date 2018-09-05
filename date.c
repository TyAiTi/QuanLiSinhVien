#include <stdio.h>
#include "date.h"


void input_date(_date *date) {
	printf("Implement input_date here!\n");
	printf("date/month/year\n");
	scanf("%d %d %d", &date->date, &date->month, &date->year);
}

void print_date(_date date) {
	printf("Implement print_date here!s\n");
	printf("date/month/year\n");
	printf("%d/%d/%d", date.date, date.month, date.year);

}

int main()
{
	_date date;
	input_date(&date);
	print_date(date);

	return 0;
}