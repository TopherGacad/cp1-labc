#include <stdio.h>

int main() {
    char name[] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}


/*
REASONING:
i. string is not a valid data type in C. You should use a char array for storing text.
ii. Format specifier should match type (%s for strings).
*/