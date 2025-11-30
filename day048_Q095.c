//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
    char s1[500], s2[500];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    // remove trailing newline if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    // If lengths differ, can't be rotations
    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation.\n");
        return 0;
    }
    // create s1s1
    char s1s1[1000];
    strcpy(s1s1, s1);
    strcat(s1s1, s1);
    // check if s2 is substring of s1s1
    if (strstr(s1s1, s2) != NULL)
        printf("Yes — second string is a rotation of the first.\n");
    else
        printf("No — not a rotation.\n");

    return 0;
}