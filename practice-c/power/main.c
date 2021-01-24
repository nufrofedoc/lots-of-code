#include <stdio.h>

void main()
{
    // Variable declaration
    int a, b, result = 1, i;

    // Read values from user
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Logic
    for (i = 1; i <= b; i++)
        result = result*a;

    // Print the result
    printf("%d power %d = %d\n", a, b, result);
}
