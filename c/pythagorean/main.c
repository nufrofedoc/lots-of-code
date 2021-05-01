#include <stdio.h>

int Squared(int x);

int main()
{
    int sideA;
    int sideB;
    int sideC;
    int maxC;

    printf("Enter max length of hypo: ");
    scanf("%d", &maxC);

    for (sideC = 1; sideC <= maxC; sideC++) {
        for (sideB = 1; sideB <= maxC; sideB++) {
            for (sideA = 1; sideA <= maxC; sideA++) {
                if (Squared(sideC) == Squared(sideA) + Squared(sideB))
                    printf("---------------------------------------------\n");
                    printf("first side - %d\nsecond side - %d\nthird side - %d\n", sideA, sideB, sideC);
                    printf("---------------------------------------------\n");
            }
        }
    }

}

int Squared(int x)
{
    return x * x;
}
