//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Sum of first n odd numbers
    for(int i = 1; i <= n; i++) {
        sum += (2*i - 1);  // ith odd number is 2*i - 1
    }
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}