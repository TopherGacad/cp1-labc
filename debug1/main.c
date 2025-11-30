#include <stdio.h>

int main() {
    char name[] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING:
C has no built-in string type only char. text is stored as `char` arrays (C-strings).
The format specifier %s is correct for a char[].
*/
