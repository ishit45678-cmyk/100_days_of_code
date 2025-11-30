//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, original, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;           // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                 // remove last digit
    }
    if (original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);

    return 0;
}