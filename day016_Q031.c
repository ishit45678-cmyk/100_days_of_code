//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int num, binary = 0, place = 1, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num; 
    while (temp > 0) {
        remainder = temp % 2;
        binary = binary + remainder * place;
        place *= 10;
        temp /= 2;
    }
    printf("Binary representation of %d is: %d\n", num, binary);
    return 0;
}