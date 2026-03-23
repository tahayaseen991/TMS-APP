#include <stdio.h>
#include <stdlib.h>

// Function called when login fails
void login_deny() {
    printf("\nAccess Denied!\n");

    // Pause until user presses enter
    printf("Press ENTER to return to login screen...");
    getchar(); // consume previous newline
    getchar(); // wait for user input
}
