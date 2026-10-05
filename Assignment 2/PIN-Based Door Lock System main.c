#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    // Constants
    const char CORRECT_PIN[] = "1234"; // The correct PIN to unlock
    const int MAX_ATTEMPTS = 3;

    int attempts = 0;
    int isAuthenticated = 0; // Acts as a boolean (0 = false, 1 = true)
    char enteredPin[50];     // Array to hold the user's input

    // Loop for PIN attempts (Slide 4)
    while (attempts < MAX_ATTEMPTS && !isAuthenticated) {
        printf("Enter your 4-digit PIN: ");
        scanf("%s", enteredPin); // Read input as a string

        // Slide 1: Validate PIN length using if-else-if
        if (strlen(enteredPin) < 4) {
            printf("PIN is too short (must be 4 digits)\n");
        }
        else if (strlen(enteredPin) > 4) {
            printf("PIN is too long (must be 4 digits)\n");
        }
        else {
            printf("PIN is exactly 4 digits\n");

            // Check if PIN is correct using strcmp (string compare)
            if (strcmp(enteredPin, CORRECT_PIN) == 0) {
                isAuthenticated = 1;

                // Slide 2: Display the menu
                int choice;
                printf("\n=== Device Menu ===\n");
                printf("1. Open Door\n");
                printf("2. Change Username\n");
                printf("3. Change PIN\n");
                printf("4. Exit\n");
                printf("Enter your choice (1-4): ");
                scanf("%d", &choice);

                // Slide 3: Switch statement to handle the choice
                switch (choice) {
                    case 1:
                        printf("Access granted. Door unlocked\n");
                        break;
                    case 2:
                        printf("Change username feature coming soon.\n");
                        break;
                    case 3:
                        printf("Change PIN feature coming soon.\n");
                        break;
                    case 4:
                        printf("Exiting system.\n");
                        break;
                    default:
                        printf("Invalid option! Please try again.\n");
                        break;
                }
            }
            else {
                // Incorrect PIN logic (Slide 4)
                attempts++;
                int remaining = MAX_ATTEMPTS - attempts;
                if (remaining > 0) {
                    printf("Incorrect PIN. You have %d attempts remaining.\n", remaining);
                }
            }
        }
    }

    // Slide 5: Lockout logic if 3 attempts are exceeded
    if (!isAuthenticated) {
        printf("\nToo many incorrect attempts. System locked! Wait for 5 seconds...\n");

        // Slide 5: For loop for countdown
        for (int i = 5; i > 0; i--) {
            printf("%d...\n", i);

            // Sleep(1000) in C takes milliseconds
            // Note: On Windows, use Sleep(1000) with a capital 'S' and include <windows.h>
            sleep(1);
        }
        printf("You can try again now.\n");
    }
    return 0;
}
