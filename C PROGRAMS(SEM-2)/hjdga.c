#include <stdio.h>
#include <unistd.h> // for usleep function

int main() {
    char hello[] = "hello world";
    
    // Loop through each character in the string
    for (int i = 0; hello[i] != '\0'; i++) {
        printf("%c", hello[i]); // Print the current character
        fflush(stdout); // Flush the output buffer to ensure immediate printing
        usleep(200000); // Sleep for 200,000 microseconds (0.2 seconds)
    }

    printf("\n"); // Print a newline at the end

    return 0;
}

