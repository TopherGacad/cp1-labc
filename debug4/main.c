#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
The code is incorrect because characters in C must use single quotes ('a'), not double quotes, and %s is for strings. 
A single character should use %c instead.

*/
