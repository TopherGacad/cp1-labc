#include <stdio.h>

int main() {

    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;

}

/**
REASONING:
   1. Changed the double quotation when initializing the char(grade) into a single quotation
   since we are only getting a single character or letter
   2. changed the format specifier into %c because we only declared a single letter, and we are 
   trying to output a single character

*/
