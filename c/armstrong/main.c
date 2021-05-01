#include <stdio.h>

void main()
{
    // Variable declaration
    int n, rem, m, result = 0;

    // Read data from user
    printf("Enter any number: ");
    scanf("%d", &n);

    // Logic
    m = n;
    while (m > 10) {
        rem = m % 10;
        m = m / 10;
        result = result + rem*rem*rem;
    }

    // Print the result
    if (result == n)
        printf("%d is ARMSTRONG Number", n);
    else
        printf("%d is Not ARMSTRONG Number", n);
}
