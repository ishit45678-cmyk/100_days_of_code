//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[200];
    int freq[26] = {0};   // frequency array for 'a' to 'z'
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // consider only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  // increase frequency
            // if a character appears again, print it
            if (freq[ch - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;   // stop after finding the first repeat
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}