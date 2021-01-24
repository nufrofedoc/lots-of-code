#include <stdio.h>

void main()
{
    // Variable declaration
    int n, m, rem, rev = 0;

    // Read data from user
    printf("Enter any number: ");
    scanf("%d", &n);

    // Logic
    m = n;
    while (m > 0) {
        rem = m % 10;
        m = m / 10;
        rev = rev * 10 + rem;
    }
    if (n == rev)
        printf("%d is a PALINDROME", n);
    else
        printf("%d is NOT a PALINDROME", n);
}
