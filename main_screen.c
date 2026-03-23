#include <stdio.h>
#include <string.h>
#include "login_accept.c"
#include "login_deny.c"
#include "main_menu.c"

int main() {
    char username[50];
    char password[50];

    while (1) {
        printf("=====================================\n");
        printf("           TMS LOGIN\n");
        printf("=====================================\n");

        printf("Enter Username: ");
        scanf("%s", username);

        printf("Enter Password: ");
        scanf("%s", password);

        // Check credentials
        if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) {
            login_accept(); // go to main menu
        } else {
            login_deny();   // back to login
        }
    }

    return 0;
}
