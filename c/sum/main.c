#include <stdio.h>
// Author : Ruslan Lazurenko

void main()
{
    // Variable Declaration
    int input, i, sum = 0;

    // Read the number from user
    printf("Enter any number ");
    scanf("%d", &input);

    // Logic
    for (i = 1; i <= input; i++)
        sum += i;

    // Print the output
    printf("Sum of %d natural number : %d\n", input, sum);
}
