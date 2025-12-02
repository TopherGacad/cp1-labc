#include <stdio.h>

int main()
{
    char grade = 'A';
    printf("Grade: %c\n", grade);
    return 0;
}

/**
REASONING:
            1. use '' instead of "" for single characters like 'A', if not single character, use it like this "ABC"
            2. for single characters use %C

*/
