#include <stdio.h>
#include <stdlib.h>

// Function called when login is successful
void login_accept() {
    printf("\nLogin Successful!\n");

    // Pause until user presses enter
    printf("Press ENTER to continue to Main Menu...");
    getchar(); // consume previous newline
    getchar(); // wait for user input

    // Call main menu
    extern void main_menu(); // main_menu defined in main_menu.c
    main_menu();
}
