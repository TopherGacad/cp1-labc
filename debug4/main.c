#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
       the reason, the code is wrong because a char variable can store just one character,
       and that must be written using single quotes instead of double quotes.
       using double quotes creates a string, not a character.
       the format specifier was wrong, too—%s is for strings, and %c is used for a single character.
       changing "A" to 'A' and updating the specifier fixes the program.

*/
