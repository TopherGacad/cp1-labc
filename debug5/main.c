#include <stdio.h>

int main () {

    double distance = 12.345;
    printf("Distance: %.3lf km\n", distance);
    return 0;
}

/*
    Reasoning:
    1. The format specifier used was wrong (%d is for int).
    2. I replaced it with %lf with .3 since the given has 3 decimal places
*/