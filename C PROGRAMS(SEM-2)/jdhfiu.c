#include <stdio.h>
#include <unistd.h> // for usleep function

int main() {
    int seconds;

    // Input the number of seconds from the user
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    // Countdown timer
    while (seconds >= 0) {
        printf("\rTime remaining: %d seconds", seconds); // Print the remaining time
        fflush(stdout); // Flush the output buffer to ensure immediate printing
        usleep(1000000); // Sleep for 1,000,000 microseconds (1 second)
        seconds--; // Decrement the seconds
    }

    printf("\nTime's up!\n");

    return 0;
}

