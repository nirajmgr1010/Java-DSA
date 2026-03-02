#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACKSIZE 100  // Maximum stack size

typedef struct {
    int consumerId;
    char name[50];
    int meterNo;
    int previousReading;
    int currentReading;
    int units;
    float billAmount;
} Consumer;

Consumer stack[STACKSIZE];
int top = -1;

// PUSH operation
void pushConsumer() {
    if (top == STACKSIZE - 1) { // Check if stack is full
        printf("\nStack is full! Cannot insert new consumer.\n");
        return;
    }

    top++; // Increase top
    printf("Enter Consumer ID: ");
    scanf("%d", &stack[top].consumerId);
    printf("Enter Name: ");
    scanf("%s", stack[top].name);
    printf("Enter Meter Number: ");
    scanf("%d", &stack[top].meterNo);
    printf("Enter Previous Reading: ");
    scanf("%d", &stack[top].previousReading);
    printf("Enter Current Reading: ");
    scanf("%d", &stack[top].currentReading);

    // Calculate units and bill
    stack[top].units = stack[top].currentReading - stack[top].previousReading;
    stack[top].billAmount = stack[top].units * 5.0;

    printf("\nConsumer ID %d added successfully!\n", stack[top].consumerId);
}

// POP operation
void popConsumer() {
    if (top == -1) { // Check if stack is empty
        printf("\nStack is empty! Cannot remove consumer.\n");
        return;
    }

    printf("\nConsumer ID %d removed successfully.\n", stack[top].consumerId);
    top--; // Decrease top
}

// Show all consumers
void showConsumers() {
    if (top == -1) {
        printf("\nNo consumers to show.\n");
        return;
    }

    printf("\n--- Electricity Consumer Details ---\n");
    for (int i = top; i >= 0; i--) {
        printf("\nConsumer ID: %d", stack[i].consumerId);
        printf("\nName: %s", stack[i].name);
        printf("\nMeter No: %d", stack[i].meterNo);
        printf("\nUnits Consumed: %d", stack[i].units);
        printf("\nBill Amount: %.2f", stack[i].billAmount);
        printf("\n---------------------------");
    }
}

// Update meter reading by consumer ID
void updateMeterReading() {
    if (top == -1) {
        printf("\nNo consumers to update.\n");
        return;
    }

    int id, newReading;
    printf("Enter Consumer ID: ");
    scanf("%d", &id);
    printf("Enter New Meter Reading: ");
    scanf("%d", &newReading);

    for (int i = 0; i <= top; i++) {
        if (stack[i].consumerId == id) {
            stack[i].previousReading = stack[i].currentReading;
            stack[i].currentReading = newReading;
            stack[i].units = newReading - stack[i].previousReading;
            stack[i].billAmount = stack[i].units * 5.0;
            printf("\nMeter updated for Consumer ID %d. New Bill: %.2f\n",
                   id, stack[i].billAmount);
            return;
        }
    }
    printf("\nConsumer ID %d not found.\n", id);
}

// Search consumer by ID
void searchConsumer() {
    if (top == -1) {
        printf("\nNo consumers to search.\n");
        return;
    }

    int id;
    printf("Enter Consumer ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i <= top; i++) {
        if (stack[i].consumerId == id) {
            printf("\nConsumer Found:");
            printf("\nID: %d | Name: %s | Meter No: %d | Units: %d | Bill: %.2f\n",
                   stack[i].consumerId, stack[i].name, stack[i].meterNo,
                   stack[i].units, stack[i].billAmount);
            return;
        }
    }
    printf("\nConsumer ID %d not found.\n", id);
}

int main() {
    int choice;

    do {
        printf("\n===== ELECTRICITY MANAGEMENT SYSTEM (STACK) =====\n");
        printf("1. Add Consumer (PUSH)\n");
        printf("2. Show All Consumers\n");
        printf("3. Update Meter Reading\n");
        printf("4. Search Consumer\n");
        printf("5. Delete Last Consumer (POP)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                pushConsumer();
                break;
            case 2:
                showConsumers();
                break;
            case 3:
                updateMeterReading();
                break;
            case 4:
                searchConsumer();
                break;
            case 5:
                popConsumer();
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
 