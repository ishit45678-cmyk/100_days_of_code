//Reverse a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int len, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        if (str[i] != '\n')
            printf("%c", str[i]);
    }
    return 0;
}