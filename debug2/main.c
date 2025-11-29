#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
 - The values passed to printf must match the format specifiers in both 
   data type and order.
- %d expects an int but gpa (double) was given.
- %.2lf expects a double but age (int) was given.

*/
