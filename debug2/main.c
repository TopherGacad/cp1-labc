#include <stdio.h>

int main() {
    int age = 20;
    float gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
1. It's okay to use float for 2 decimal places, but it's your choice if you want to use double to be precise.
2. The values in `printf` were passed in the wrong order, so the variables did not match their corresponding format specifiers. 
3. The `%d` specifier must receive an `int` and the `%.2lf` specifier must receive a `float`.


*/
