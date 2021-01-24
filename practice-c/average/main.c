#include <stdio.h>
#define MAX_NUMS 10

int Average(int input_values[]);

int main()
{
    int index;
    int mean;
    int numbers[MAX_NUMS];

    /* Get input */
    printf("Enter %d numbers.\n", MAX_NUMS);
    for (index = 0; index < MAX_NUMS; index++)
    {
        printf("Input number %d: ", index);
        scanf("%d", &numbers[index]);
    }

    mean = Average(numbers);

    printf("The average of these numbers is %d\n", mean);
}

int Average(int inputValues[])
{
    int index;
    int sum = 0;

    for (index = 0; index < MAX_NUMS; index++)
    {
        sum = sum + inputValues[index];
    }

    return (sum / MAX_NUMS);
}
