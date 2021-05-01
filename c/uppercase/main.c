#include <stdio.h>

char ToUpper(char inchar);

int main()
{
    char echo = 'A';
    char upcase;

    while (echo != '\n') {
        scanf("%c", &echo);
        upcase = ToUpper(echo);
        printf("%c", upcase);
    }
}

char ToUpper(char inchar)
{
    char outchar;

    if ('a' <= inchar && inchar <= 'z')
        outchar = inchar - ('a' - 'A');
    else
        outchar = inchar;

    return outchar;
}
