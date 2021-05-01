#include <stdio.h>

void main()
{
    // Variable declaration
    int input, i;

    // Read data from user
    printf("Enter your number");
    scanf("%d", &input);

    // Logic
    for (i = 1; i <= 10; i++)
        printf("\n%dx%d=%d", input, i, input*i);
}
