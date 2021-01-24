#include <stdio.h>

void main()
{
    // Variable declaration
    int n, i, a = 0, b = 1, c;

    // Read data from user
    printf("Enter no. of terms to be printed(n > 2): ");
    scanf("%d", &n);

    // Logic
    printf("Fibonacci Series: 0 1");

    for (i = 1; i <= n - 2; i++) {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
    }
}
