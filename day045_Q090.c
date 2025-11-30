//Toggle case of each character in a string.
#include <stdio.h>
int main() {
    char str[200];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        // If lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // If uppercase, convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("Toggled string: %s", str);
    return 0;
}