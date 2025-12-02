#include <stdio.h>

int main()
{
    int age = 20;
    float gpa = 1.75;

    printf("Age: %d, GPA: %.2f\n", age, gpa);

    return 0;
}

/**
REASONING: 1. Double is unnecessary, Float is fine for 2 decimal points.
           2. age needs to be before gpa, C syntax reads in chronological order.


*/
