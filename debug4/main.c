#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
a. Since the grade is a single character it should be enclosed in single quotes
rather than double quotes, which denotes strings.
b. The %s specifier is used for strings, so the proper specifier should be
%c because grade is of type char.
*/
