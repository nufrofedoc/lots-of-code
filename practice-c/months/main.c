#include <stdio.h>

int main()
{
    int month;
    char exit = 'N';

    while (exit == 'N') {
        printf("Enter the number of the month: ");
        scanf("%d", &month);

        if (month == 4 || month == 6 || month == 9 || month == 11)
            printf("The month has 30 days\n");
        else if (month <= 12 && month != 2)
            printf("The month has 31 days\n");
        else if (month == 2)
            printf("The month has either 28 days or 29 days\n");
        else
            printf("Don't know that month\n");

        printf("Do you want to exit?");
        scanf("%s", &exit);

        if (exit == 'Y')
            break;
    }
}
