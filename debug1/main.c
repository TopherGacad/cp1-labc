#include <stdio.h>

int main() {
    char name [] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING:
a. in C language string is an arrays of character and not a separate type.
b. To print name it should be char [] or *char.
c. The format specifier is %s because it is used to print null-terminated strings.

*/
