//Count vowels and consonants in a string.
#include <stdio.h>
int main() {
    char str[200];
    int i;
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert to uppercase manually
        }
    }
    printf("Uppercase string: %s", str);
    return 0;
}