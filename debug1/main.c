#include <stdio.h>

int main() {
    char name[20] = "Juan";
    printf("Name: %s\n", name);
    return 0;
}

/**
REASONING:
This is not the correct way to store a string in C as it is not considered a data type there.
Instead, we use the data type char, create a variable, put [] alongside it in oder to store a string
(the size can also be specified (e.g., [20])),
and assign it a value (which in this case is "Juan").

*/
