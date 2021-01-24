#include <stdio.h>

// Function declaration
int Factorial(int input);

void main()
{
    // Variable declaration
    int fn, sn;

    // Read data from user
    printf("Enter first number: ");
    scanf("%d", &fn);

    printf("Enter second number: ");
    scanf("%d", &sn);

    // Print the result
    printf("Factorial of %d is %d", fn, Factorial(fn));
    printf("\nFactorial of %d is %d", sn, Factorial(sn));

}

// Function definition
int Factorial(int input)
{
    int fact = 1, i;

    for (i = 1; i <= input; i++)
        fact = fact*i;
    return fact;
}
