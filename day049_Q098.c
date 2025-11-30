//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    int i = 0, len;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';
    len = strlen(name);
    // Print the first initial
    if (name[0] != ' ')
        printf("%c ", name[0]);
    // Find the last space → surname starts there
    int lastSpace = -1;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    // Print initials for middle names (before last space)
    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c ", name[i + 1]);
        }
    }
    // Print full surname
    printf("%s\n", name + lastSpace + 1);
    return 0;
}