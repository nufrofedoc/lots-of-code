#include <stdio.h>
#include <stdlib.h>

typedef struct carType Car;

struct carType {
    int vehicleID;
    char make[20];
    char model[20];
    int year;
    int mileage;
    double cost;

    Car *next;
};

Car *ScanList(Car *headPointer, int searchID)
{
    Car *previous;
    Car *current;

    // Point to start of list
    previous = headPointer;
    current  = headPointer->next;

    while ((current != NULL) && (current->vehicleID < searchID)) {
        previous = current;
        current  = current->next;
    }

    return previous;
}

void AddEntry(Car *headPointer)
{
    Car *newNode;
    Car *nextNode;
    Car *prevNode;

    newNode = (Car *) malloc(sizeof(Car));

    if (newNode == NULL) {
        printf("Error: could not allocate a new node\n");
        exit(1);
    }

    printf("Enter the following info about the car.\n");
    printf("Separate each field by white space:\n");
    printf("vehicle_id make model year mileage cost\n");

    scanf("%d %s %s %d %d %lf",
          &newNode->vehicleID, newNode->make, newNode->model,
          &newNode->year, &newNode->mileage, &newNode->cost);

    prevNode = ScanList(headPointer, newNode->vehicleID);
    nextNode = prevNode->next;

    if ((nextNode == NULL) ||
        (nextNode->vehicleID != newNode->vehicleID)) {
        prevNode->next = newNode;
        newNode->next = nextNode;
        printf("Entry added.\n\n");
    }
    else {
        printf("That car already exists in the database!\n");
        printf("Entry not added.\n\n");
        free(newNode);
    }
}

void DeleteEntry(Car *headPointer)
{
    int vehicleID;
    Car *delNode;
    Car *prevNode;

    printf("Enter the vehicle ID of the car to delete:\n");
    scanf("%d", &vehicleID);

    prevNode = ScanList(headPointer, vehicleID);
    delNode  = prevNode->next;

    if (delNode != NULL && delNode->vehicleID == vehicleID) {
        prevNode->next = delNode->next;
        printf("Vehicle with ID %d deleted.\n\n", vehicleID);
        free(delNode);
    }
    else {
        printf("The vehicle was not found in the database.\n");
    }
}

void Search(Car *headPointer)
{
    int vehicleID;
    Car *searchNode;
    Car *prevNode;

    printf("Enter the vehicle ID number of the car to search for:\n");
    scanf("%d", &vehicleID);

    prevNode = ScanList(headPointer, vehicleID);
    searchNode = prevNode->next;

    if (searchNode != NULL && searchNode->vehicleID == vehicleID) {
        printf("vehicle ID : %d\n", searchNode->vehicleID);
        printf("make       : %s\n", searchNode->make);
        printf("model      : %s\n", searchNode->model);
        printf("year       : %d\n", searchNode->year);
        printf("mileage    : %d\n", searchNode->mileage);

        printf("cost       : $%10.2f\n\n", searchNode->cost);
    }
    else {
        printf("The vehicle ID %d was not found in the database.\n\n", vehicleID);
    }
}

int main()
{
    int op = 0;
    Car carBase;

    carBase.next = NULL;

    printf("=========================\n");
    printf("=== Used car database ===\n");
    printf("=========================\n\n");

    while (op != 4) {
        printf("Enter an operation:\n");
        printf("1 - Car aquired. Add a new entry for it.\n");
        printf("2 - Car solid. Remove its entry.\n");
        printf("3 - Query. Look up a car's information.\n");
        printf("4 - Quit.\n");
        scanf("%d", &op);

        switch(op) {
        case 1:
            AddEntry(&carBase);
            break;
        case 2:
            DeleteEntry(&carBase);
        break;
        case 3:
            Search(&carBase);
        break;
        case 4:
            printf("Goodbye.\n\n");
        break;
        default:
            printf("Invalid option. Try again.\n\n");
        }
    }
}
