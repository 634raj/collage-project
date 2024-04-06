#include <stdio.h>
#include <string.h>

int main() {
    char username[20]; // assuming username length is less than 20 characters
    char password[20]; // assuming password length is less than 20 characters

    // Hardcoded username and password
    char correctUsername[] = "user123";
    char correctPassword[] = "password123";

    // Input username
    printf("Enter username: ");
    scanf("%s", username);

    // Input password
    printf("Enter password: ");
    scanf("%s", password);

    // Verify username and password
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}

