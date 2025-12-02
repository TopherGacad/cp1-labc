#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
1. Double quotes create a string, but a single character must use single quotes when stored in a char variable. 
2. The %c format specifier is required because %s is only for strings, not single characters.

*/
