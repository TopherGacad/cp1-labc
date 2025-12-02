#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:

    In declaring the variable grade, double quotes were used instead of single quotes.
    In C, single quotes are used to denote a single character (char).
    The format specifier %s is used for strings, but 'grade' is a char.
    The correct format specifier for a char is %c.
*/
