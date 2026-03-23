#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Running Login System Tests...\n\n");

    // -----------------------------
    // Test Case 1: Correct Credentials
    // -----------------------------
    printf("Test 1: admin / admin (Expected: SUCCESS)\n");
    // Provide username and password via echo
    // Simulates pressing enter after login
    system("echo admin admin | ./main_screen");
    printf("\n---------------------------------\n");

    // -----------------------------
    // Test Case 2: Wrong Credentials
    // -----------------------------
    printf("Test 2: administrator / administrator (Expected: DENIED)\n");
    system("echo administrator administrator | ./main_screen");
    printf("\n---------------------------------\n");

    return 0;
}
