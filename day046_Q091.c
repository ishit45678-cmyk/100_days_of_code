//Remove all vowels from a string.
#include <stdio.h>
int main() {
    char str[200], result[200];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if character is a vowel (lower or upper case)
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            continue;   // skip vowels
        }
        result[j++] = ch;  // keep non-vowels
    }
    result[j] = '\0';  // null terminate the new string
    printf("String without vowels: %s", result);
    return 0;
}