//Print the initials of a name.
#include <stdio.h>
int main() {
    char name[200];
    int i = 0;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    // Print the first initial
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c ", name[0]);
    // Print initials after every space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n') {
            printf("%c ", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}