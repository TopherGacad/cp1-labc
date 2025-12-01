#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

/**
REASONING:
The issue is that stdlib.h is included even though the program doesn’t use any functions from it. 
The solution is simply to remove the unnecessary header since only stdio.h is needed for printf().

*/
