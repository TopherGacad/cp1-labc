#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 1.75;

    printf("Age: %d, GPA: %.2lf\n", age, gpa);

    return 0;
}

/**
REASONING:
    1.The variables at the end of the print statement were switched with one another.
    2.They have to be in order as how you declare them. 
    (As per instructions, I only changed what's needed as keeping it a double instead of a float will still make it work.)

*/
