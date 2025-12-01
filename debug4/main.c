#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
When assigning a value to a char variable, you should use single quotes ('A') instead of double quotes. 
Double quotes are used for strings, not single characters. 
Also, the correct format specifier for a char is %c, not %s.


*/
