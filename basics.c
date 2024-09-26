#include <stdio.h>  // Include standard I/O library
#include <conio.h>  // Include console I/O library (optional, may not be needed in modern compilers)

int main()
{
    // Declaring and initializing strings in C
    char str1[] = "Hello World";  // String initialized using string literal
    char str2[] = {'A', 'p', 'p', 'l', 'e', ' ', 'i', 's', ' ', 'r', 'e', 'd', '\0'};  // String initialized using character array

    // Printing a single character
    char alpha = '+';  // Character variable
    printf("\n%c\n\n", alpha);  // Output the character

    // Printing strings
    puts(str1);  // Print str1 using puts function (adds a newline automatically)
    printf("\n%s\n", str2);  // Print str2 using printf

    // Method 1: Taking string input from user
    char str3[10];  // Declare a character array to hold input
    puts("\nEnter string to print it in console: ");  // Prompt for user input
    gets(str3);  // Read a string from the user (note: unsafe as it doesn't check buffer size)
    puts(str3);  // Print the entered string

    // Method 2: Taking string input from user
    char str4[10];  // Declare another character array
    puts("\nEnter string to print it in console: ");  // Prompt for user input
    scanf("%s", str4);  // Read a string from the user (terminates at space)
    puts(str4);  // Print the entered string

    // Warning: Method 2 cannot take spaces as input; it stops reading at the first space character.

    return 0;  // Return success status
}
