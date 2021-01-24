#include <stdio.h>

void main()
{
    // Variable declaration
    int n, rev = 0, rem, m;

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

    // Print the result
    printf("Reverse of %d is %d", n, rev);
}
