#include <stdio.h>

// Function declaration
int Factorial(int input);

void main()
{
    // Variable declaration
    int n;

    // Read data from user
    printf("Enter first number: ");
    scanf("%d", &n);

    // Print the result
    printf("Factorial %d is %d\n", n, Factorial(n));
}

// Function definition
int Factorial(int input)
{
    if (input == 0)
        return 1;
    else
        return input*Factorial(input - 1);
}
