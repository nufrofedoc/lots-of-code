#include <stdio.h>

int isPrimeNumber(int input);

void main()
{
    // Variable declaration
    int a, b, i;

    // Read data from user
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Logic
    for (i = a; i <= b; i++) {
        if (isPrimeNumber(i))
            printf("%d ", i);
    }
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
