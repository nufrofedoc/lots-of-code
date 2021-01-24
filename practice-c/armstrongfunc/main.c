#include <stdio.h>

int isArmstrongNumber(int n);

void main()
{
    // Variable declaration
    int n;

    // Read data from user
    printf("Enter any number: ");
    scanf("%d", &n);

    // Print the result
    if (isArmstrongNumber(n))
        printf("%d is ARMSTRONG Number", n);
    else
        printf("%d is Not ARMSTRONG Number", n);
}

int isArmstrongNumber(int n)
{
    int rem, m, result = 0;
    m = n;
    while (m > 10) {
        rem = m % 10;
        m = m / 10;
        result = result + rem*rem*rem;
    }
    if (result == n)
        return 1;
    else
        return 0;
}
