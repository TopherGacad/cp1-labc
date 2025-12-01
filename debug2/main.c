#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING: 1. The specifier of GPA is incorrect, there is unnecessary l on the specifier.
            2. The arrangement of format specifier should be: age, gpa.


*/
