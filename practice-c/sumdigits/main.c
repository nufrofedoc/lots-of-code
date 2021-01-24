#include <stdio.h>

void main()
{
    // Variable declaration
    int n, m, i, rem, result = 0;

    // Read data from user
    printf("Enter any number: ");
    scanf("%d", &n);
    // Logic
    m = n;
    while (m > 0) {
        rem = m % 10;
        m = m / 10;
        result = result + rem;
    }
    printf("Sum of digits of %d is %d", n, result);
}
