#include <stdio.h>

int isPrimeNumber(int input);

void main()
{
    // Variable declaration
    int input;

    // Read values from user
    printf("Enter any number: ");
    scanf("%d", &input);

    // Print the result
    if (isPrimeNumber(input))
        printf("%d is a Prime Number", input);
    else
        printf("%d is Not a Prime Number", input);
}

int isPrimeNumber(int input)
{
    int i;

    for (i = 2; i < input; i++) {
        if (input%i == 0)
            break;
    }
    if (i == input)
        return 1;
    else
        return 0;
}
