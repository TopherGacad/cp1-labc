#include <stdio.h>

int main() {
    char name[] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/** 
REASONING:
i. string is not a valid data type, use char[] to store text.
ii. char name[] = "Juan", stores the string with a null terminator.
iii. format specifier %s is alr correct.
*/
