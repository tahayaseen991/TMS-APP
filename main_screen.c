#include <stdio.h>
#include <string.h>
#include "login_accept.c"   // or better: use header file
#include "login_deny.c"

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
        login_accept();   // call function instead of main
    } else {
        printf("\nLogin Failed!\n");
        login_deny();     // call function instead of main
    }

    return 0;
}
