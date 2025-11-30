//Count vowels and consonants in a string.
#include <stdio.h>
int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads including spaces
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Convert uppercase to lowercase for easy checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        // Check vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check consonants (letters other than vowels)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}