#include <stdio.h>

// Declare the function from view_shipments.c
extern void view_shipments();

int main() {
    printf("Running View Shipments Tests...\n\n");

    printf("Test 1: Call view_shipments()\n");
    printf("Expected Output: \"--- VIEW SHIPMENTS MODULE ---\"\n");

    // Call the function
    view_shipments();

    printf("\nTest Completed.\n");
    return 0;
}
