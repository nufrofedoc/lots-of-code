#include <stdio.h>

int main()
{
    int amount;
    int rate;
    int time;

    int hours;
    int minutes;
    int seconds;

    printf("How many bytes of data to be transferred?");
    scanf("%d", &amount);

    printf("What is the transfer rate (in bytes/sec)?");
    scanf("%d", &rate);


    time = amount / rate;

    hours = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = ((time % 3600) % 60);

    printf("Time: %dh %dm %ds\n", hours, minutes, seconds);

    return 0;
}
