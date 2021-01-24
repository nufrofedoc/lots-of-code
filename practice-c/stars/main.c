#include <stdio.h>

void main()
{
    // Variable declaration
    int n, i, j;

    // Read data from user
    printf("Enter no. of rows to be printed:");
    scanf("%d", &n);

    // Logic
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
