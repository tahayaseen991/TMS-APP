#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char username[50];
    char password[50];

    printf("=====================================\n");
    printf("      TMS - Login System\n");
    printf("=====================================\n");

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    // Check credentials
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) {
        printf("\nLogin Successful!\n");
        system("./login_accept");   // Calls accept module
    } else {
        printf("\nLogin Failed!\n");
        system("./login_deny");     // Calls deny module
    }

    return 0;
}
