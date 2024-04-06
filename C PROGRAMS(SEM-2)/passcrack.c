#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int is_alphanumeric(const char *str) {
    while (*str) {
        if (!isalnum(*str))
            return 0;
        str++;
    }
    return 1;
}

char* generate_random_password(int length) {
    char pwd[length + 1];
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int i;
    for (i = 0; i < length; i++) {
        pwd[i] = letters[rand() % 62];
    }
    pwd[length] = '\0';
    return strdup(pwd);
}

int main() {
    srand(time(NULL));

    char u_pwd[12]; // Maximum password length: 10 + 1 (null terminator)
    printf("Enter a password (up to 10 characters, alphanumeric only): ");
    scanf("%s", u_pwd);

    if (strlen(u_pwd) > 10 || !is_alphanumeric(u_pwd)) {
        printf("Invalid password.\n");
        return 1;
    }

    char *pw = generate_random_password(strlen(u_pwd));
    while (strcmp(pw, u_pwd) != 0) {
        printf("Cracking password... Please wait.\n");
        printf("Your password is: %s\n", pw);
        pw = generate_random_password(strlen(u_pwd));
    }

    printf("Password cracked! Your password is: %s\n", pw);

    return 0;
}


