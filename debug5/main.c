#include <stdio.h>

int main() {
    double distance = 12.345;
    printf("Distance: %.2lf km\n", distance);
    return 0;
}

/**
REASONING:
- The original code used %d in printf, which expects an int, but the variable 
   distance is of type double. Passing a double to %d causes undefined 
   behavior. To correctly print a double, the format specifier %.2lf is used.

*/
