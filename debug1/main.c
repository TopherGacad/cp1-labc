#include <stdio.h>

int main() {
    char name[] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING:
The error happens because string is not a valid type in C. You need to use char name[] = "Juan"; for it to work.

*/
