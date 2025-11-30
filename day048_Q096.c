//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[300];
    int i = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            i++;
        } else {
            reverse(str, start, i - 1);  // reverse current word
            i++;
            start = i;  // next word starts after space
        }
    }
    // Reverse the last word (since loop ends without hitting space)
    reverse(str, start, i - 1);
    printf("Result: %s\n", str);
    return 0;
}