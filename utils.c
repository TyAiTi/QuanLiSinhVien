#include <stdio.h>
#include <string.h>
#include "utils.h"


/*
** Input string from standard input (stdin - keyboard)
** Params:
**  str: pointer to string
**  max_length: maximum number of characters to be copied into str 
**      (including the newline and terminating null-character).
** Return: void
*/
 
void input_string(char str[], int max_length) {
    fgets(str, max_length, stdin);
    str[strlen(str) - 1] = '\0';
}
