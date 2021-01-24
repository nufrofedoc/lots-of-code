#include <stdio.h>

void main()
{
    // Variable declaration
    int input, i, count = 0;

    // Read values from user
    printf("Enter any number: ");
    scanf("%d", &input);

    // Logic
    for (i = 2; i <= input; i++) {
        if (input%i == 0)
            break;
    }
    if (i == input)
        printf("%d is PRIME Number\n", input);
    else
        printf("%d is NOT A PRIME Number\n", input);
}
