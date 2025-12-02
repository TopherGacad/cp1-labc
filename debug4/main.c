#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:

used a string ("A") instead of a character ('A') and
printed it with the wrong format specifier (%s instead of %c).

*/
