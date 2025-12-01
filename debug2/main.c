#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
1. %d is for integers should match 'age'.
2. %.2f (or %.2lf) is for double should match 'gpa'.
3. just swap them.


*/
