#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.3f km\n", distance);  // %.3f to show 3 decimal places
    return 0;
}

/**
REASONING:%d is for integers, distance is a double so use %.3lf to print with 3 decimal


*/ 
