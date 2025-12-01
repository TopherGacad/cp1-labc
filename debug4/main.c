#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c \n", grade);
    return 0;
}

/**
REASONING:
The data type is not string but the quotation is double.
The quotation should be single because char can only store one character.
The format specifier is incorrect, it should be %c which is for single characters.
*/
