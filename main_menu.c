#include <stdio.h>
#include <stdlib.h>

// Add these as extern functions
extern void view_shipments();
extern void add_shipments();

void main_menu() {
    int choice;

    while (1) {
        printf("\n===== TMS MAIN MENU =====\n");
        printf("1. View Shipments\n");
        printf("2. Add Shipment\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: view_shipments(); break;
            case 2: add_shipments(); break;
            case 3: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
