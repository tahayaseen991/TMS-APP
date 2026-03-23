#include <stdio.h>
#include <stdlib.h>

void main_menu() {
    int choice;

    while (1) {
        printf("\n===== TMS MAIN MENU =====\n");
        printf("1. View Shipments\n");
        printf("2. Add Shipment\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("View Shipments selected.\n");
                break;
            case 2:
                printf("Add Shipment selected.\n");
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
