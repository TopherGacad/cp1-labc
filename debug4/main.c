#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
    1.You declared a character, but you called a string.
    2.You also used double quotes in "A". For characters it should just be single quotes. 
    3.This means we also have to change its format specifier to "c" not "s" cause that's for strings.

*/
