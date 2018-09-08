#ifndef DATE_H
#define DATE_H

typedef struct {
    int date, month, year;
} _date;

void input_date(_date *date);
void print_date(_date date);

#endif