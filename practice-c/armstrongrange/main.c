#include <stdio.h>

int isArmstrongNumber(int n);

void main()
{
    // Variable declaration
    int a,b,i;

    // Read data from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        if (isArmstrongNumber(i))
            printf("%d ", i);
    }
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
