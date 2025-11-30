//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces
    // Count characters until '\0'
    while (str[count] != '\0') {
        count++;
    }
    // Subtract 1 if the last character is newline (from fgets)
    if (str[count - 1] == '\n') {
        count--;
    }
    printf("Number of characters = %d\n", count);
    return 0;
}