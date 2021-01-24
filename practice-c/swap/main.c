#include <stdio.h>

void main()
{
    int a = 5, b = 8, t;

    printf("BEFORE SWAP : \n");
    printf("a = %d, b = %d\n\n", a, b);
    t = a;
    a = b;
    b = t;
    printf("AFTER SWAP : \n");
    printf("a = %d, b = %d\n\n", a, b);

}
