#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
    1. Remove the double quotes in the variable,"char" should always use single quotes 
    since there is only one character or letter in the variable.

    2. Since the data type is "char", the format specifier should be "%c".

*/
