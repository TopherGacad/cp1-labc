#include <stdio.h>

int main () {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/*
    Reasoning:
    1. The value of char, which is a single character, used
    double quotes instead of single quotations. 
    2. The format specifier used was also wrong (%s is used for strings)
    so I changed it to %c which is used for char.
*/
