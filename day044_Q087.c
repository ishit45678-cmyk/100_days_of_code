//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // letters — not counted as special
        }
        else if (ch != '\n') {
            special++;  // punctuation, symbols, etc.
        }
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}