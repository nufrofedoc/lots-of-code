#include <stdio.h>

void main()
{
    // Variable declaration
    int input, i, fact = 1;

    // Read data from user
    printf("Enter any number ");
    scanf("%d", &input);

    // Logic
    for (i = 1; i <= input; i++)
        fact = fact*i;

    // Print the result
    printf("Factorial of %d is %d\n", input, fact);
}
