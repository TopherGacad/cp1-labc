#include <stdio.h>

int main() {
    char name[] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING:

In C, string is not a real type, so you must store text in a char array like this:
char name[] = "Juan"; and then print it with printf("Name: %s\n", name);,
where %s tells printf that name is a string of characters.

*/
