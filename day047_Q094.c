//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[300], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;
    char word[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[len++] = str[i];
        } else {
            word[len] = '\0';

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            len = 0; // reset for next word
        }
        i++;
    }
    // Check last word (in case the string doesn't end with a space)
    word[len] = '\0';
    if (len > maxLen) {
        strcpy(longest, word);
    }
    printf("Longest word: %s\n", longest);
    return 0;
}