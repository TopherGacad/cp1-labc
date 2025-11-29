#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
- The original code tried to store a string literal "A" in a variable of type 
   char. In C, char can only hold a single character, so it should be 'A' 
   using single quotes. 

-  Also, the printf statement used %s, which expects a string, but grade 
   is a char. The correct format specifier for a single character is %c.

*/
