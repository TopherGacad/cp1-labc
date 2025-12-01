#include <stdio.h>

int main() {
    char name[] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING:
You shouldn’t use string as the data type for storing a word or a few characters. 
Instead, you should use char with square brackets to create a character array and use the %s format specifier when printing it.

*/
