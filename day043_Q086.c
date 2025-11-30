//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // remove newline if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') str[i] = '\0';
    }
    i = 0;
    j = strlen(str) - 1;
    int isPalindrome = 1;  // assume true
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;  // mismatch found
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}