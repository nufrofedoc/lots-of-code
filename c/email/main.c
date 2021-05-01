#include <stdio.h>
#define FALSE 0
#define TRUE 0

int main()
{
    char nextChar;      // Next character in e-mail address
    int gotAt = FALSE;  // Indicate if At @ was found
    int gotDot = FALSE; // Indicate if Dot . was found

    printf("Enter you e-mail address: ");

    do {
        scanf("%c", &nextChar);

        if (nextChar == '@')
            gotAt = TRUE;

        if (nextChar == '.' && gotAt == TRUE)
            gotDot = TRUE;
    } while (nextChar != ' ' && nextChar != '\n');

    if (gotAt == TRUE && gotDot == TRUE)
        printf("Your e-mail address appears to be valid.\n");
    else
        printf("Your e-mail address is not valid");
}
