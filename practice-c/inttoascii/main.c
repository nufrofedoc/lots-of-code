#include <stdio.h>

void IntToAscii(int i);

int main()
{
    int in;

    printf("Input number: ");
    scanf("%d", &in);

    IntToAscii(in);
    printf("\n");
}

void IntToAscii(int num)
{
    int prefix;
    int currDigit;

    if (num < 10)
        printf("%c", num + '0');
    else
    {
        prefix = num / 10;
        IntToAscii(prefix);

        currDigit = num % 10;
        printf("%c", currDigit + '0');
    }
}
