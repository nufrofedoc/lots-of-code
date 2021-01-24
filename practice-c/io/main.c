#include <stdio.h>
#include <unistd.h>
#define LIMIT 10000

int main()
{
    // char inChar1;
    // char inChar2;

    // // Buffer
    // putchar('a');

    // sleep(5);

    // putchar('b');
    // putchar('\n');

    // printf("Input character 1:\n");
    // inChar1 = getchar();

    // printf("Input character 2:\n");
    // inChar2 = getchar();

    // printf("Characte 1 is %c\n", inChar1);
    // printf("Characte 2 is %c\n", inChar2);

    // char name[3];
    // int month, day, year;
    // double gpa;

    // printf("Enter: lastname birthdate, grade_point_average\n");
    // scanf("%s %d/%d/%d %lf", name, &month, &day, &year, &gpa);

    // printf("\n");
    // printf("Name: %s\n", name);
    // printf("Birthdate: %d/%d/%d\n", month, day, year);
    // printf("GPA : %f\n", gpa);

    FILE *infile;
    FILE *outfile;
    double prices[LIMIT];
    char answer[10];
    int i = 0;

    infile = fopen("ibm_stock_prices", "r");
    outfile = fopen("buy_hold_or_sell", "w");

    if (infile != NULL && outfile != NULL)
    {
        // Read the input data
        while ((fscanf(infile, "%lf", &prices[i]) != EOF) && i < LIMIT)
            i++;

        printf("%d prices read from the data file", i);

        // Process the data
        // ...

        // Write the output
        fprintf(outfile, "%s", answer);
    }
    else
    {
        printf("fopen unsuccessful!\n");
    }
}
