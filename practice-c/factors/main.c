#include <stdio.h>
// Author: Ruslan Laruzenko
// Purpose : To read a number from user and print factors of the number
void main()
{
    // Variable declaration
    int input, i;

    // Read data from user
    printf("Enter any number: ");
    scanf("%d", &input);

    // Logic
    for (i = 1; i <= input; i++)
        if (input%i == 0)
            printf("%d ", i);
}
