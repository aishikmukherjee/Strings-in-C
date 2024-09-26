#include <stdio.h>     // Include standard I/O library
#include <conio.h>     // Include console I/O library (optional, may not be needed in modern compilers)
#include <string.h>    // Include string manipulation functions

int main()
{
    // Initialize strings
    char str1[7] = "hello "; // String 1 with enough space for the null terminator
    char str2[6] = "world";   // String 2, no extra space needed

    // Copying one string to another
    char str3[10];            // Array to hold copied string
    strcpy(str3, str1);      // Copy str1 into str3
    puts(str3);              // Print str3 to the console

    // Concatenating / combining strings using strcat
    puts(strcat(str1, str2)); // Combine str1 and str2, then print the result

    // Finding the length of the string
    printf("%d\n", strlen(str1)); // Print the length of str1

    // Printing the reverse of a string
    puts(strrev(str2));        // Reverse str2 and print the result

    // Comparing two strings in C
    char str10[11] = "apple";  // String 10
    char str11[8] = "apple";   // String 11

    // Compare str10 and str11
    if (strcmp(str10, str11) == 0) // If strings are identical
    {
        printf("\nBoth the strings are identical"); // Print message for identical strings
    }
    else
    {
        printf("\nBoth of the strings are different"); // Print message for different strings
    }

    // Print comparison result (0 if identical, non-zero if different)
    printf("\n\n%d", strcmp(str10, str11));
    return 0; // Return success status
}
