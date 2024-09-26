#include <stdio.h>  // Include standard I/O library
#include <conio.h>  // Include console I/O library (optional, may not be needed in modern compilers)

int main()
{
    // Character input and output in C
    char ch;  // Declare a character variable
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Read a single character from input
    printf("You entered the character: %c\n", ch);  // Print the character

    // Word input and output in C
    char word[10];  // Declare a character array to hold a word
    printf("Enter a word: ");
    scanf("%s", word);  // Read a word from input
    printf("You entered the word: %s\n", word);  // Print the word

    // Sentence input and output in C
    char sen[25];  // Declare a character array to hold a sentence
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sen);  // Read a full sentence (until newline)
    printf("You entered the sentence: %s\n", sen);  // Print the sentence

    return 0;  // Return success status
}
