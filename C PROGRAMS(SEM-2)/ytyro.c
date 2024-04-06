#include <stdio.h>
#include <unistd.h> // for usleep function

int main() {
    char hello[] = "hello world";
    int i, j;

    // Loop to control the blinking effect
    for (j = 0; j < 5; j++) { // Blink 5 times
        // Print "hello world" with blinking effect
        for (i = 0; hello[i] != '\0'; i++) {
            printf("%c", hello[i]); // Print the current character
            fflush(stdout); // Flush the output buffer to ensure immediate printing
            usleep(500000); // Sleep for 500,000 microseconds (0.5 seconds)
            printf("\b \b"); // Erase the character by printing backspace and space
            fflush(stdout); // Flush the output buffer
            usleep(500000); // Sleep for another 0.5 seconds
        }
    }

    printf("\n"); // Move cursor to the next line after the animation

    return 0;
}

