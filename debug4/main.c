#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
1. should use %c format specifier for char type instead of %s.
2. char should be assigned a single character using single quotes ('A') instead of double quotes ("A").

*/
