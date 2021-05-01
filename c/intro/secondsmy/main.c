#include <stdio.h>

int convertSecondsToSeconds(int seconds);
int convertSecondsToMinutes(int seconds);
int convertSecondsToHours(int seconds);

void main()
{
    int seconds;
    printf("Enter any seconds: ");
    scanf("%d", &seconds);
    printf("Convert %d seconds in %d seconds", seconds, convertSecondsToSeconds(seconds));
    printf("\nConvert %d seconds in %d minutes", seconds, convertSecondsToMinutes(seconds));
    printf("\nConvert %d minutes in %d hours", seconds, convertSecondsToHours(seconds));
}

int convertSecondsToSeconds(int seconds)
{
    int sec;
    return sec;
}
int convertSecondsToMinutes(int seconds)
{
    int min;
    min = seconds / 60;

    return min;
}
int convertSecondsToHours(int seconds)
{
    int hours;
    hours = seconds / 60 / 60;

    return hours;
}
