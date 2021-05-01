#include <stdio.h>
#include <stdlib.h>
#define TOTAL_FLIGHTS 100

/* Structure definition */
struct flightType {
    char flightNum[7];
    int altitude;
    int longitude;
    int latitude;
    int heading;
    double airSpeed;
};

typedef struct flightType Flight;
int Collide(Flight *planeA, Flight *planeB);
void PotentialCollisions(Flight planes[]);

int Collide(Flight *planeA, Flight *planeB)
{
    if (planeA->altitude == planeB->altitude)
    {
        // More logic to detect collision goes here
    }
    else
        return 0;
}

void PotentialCollisions(Flight planes[])
{
    int i, j;

    for (i = 0; i < TOTAL_FLIGHTS; i++)
    {
        for (j = 0; j < TOTAL_FLIGHTS; j++)
        {
            if (Collide(&planes[i], &planes[j]))
                printf("Flights %s and %s are on collision course!\n",
                       planes[i].flightNum, planes[j].flightNum);
        }
    }
}

int main()
{
    int airbornePlanes;
    Flight *planes;

    printf("How many planes are in the air?");
    scanf("%d", &airbornePlanes);

    planes = malloc(24 * airbornePlanes);
    return 0;
}
