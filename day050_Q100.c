//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, j, k;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';
    int n = strlen(str);
    // Generate all substrings
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}