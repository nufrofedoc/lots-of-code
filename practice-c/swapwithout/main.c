#include <stdio.h>

void main()
{
    // Variable declaration
    int a = 5, b = 8;

    // Before swapping
    printf("BEFORE SWAP : \n");
    printf("a = %d, b = %d\n\n", a, b);

    // Logic
    a = a + b; // a = 13
    b = a - b; // b = 5
    a = a - b; // a = 8

    // After swapping
    printf("AFTER SWAP : \n");
    printf("a = %d, b = %d\n\n", a, b);
}
