#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
i. The variable 'grade' was declared as a char, but it used double quotes ("A")  which represent a string. A char must use single quotes ('A').
ii. The printf() function used the %s format specifier, which is for strings. 
ii. Since 'grade' is a char, the correct specifier is %c. After fixing these two issues, the program works correctly.
*/
