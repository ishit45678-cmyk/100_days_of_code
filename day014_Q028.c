//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, pro = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i += 2) {  // i starts at 2 and increments by 2 (even numbers)
        pro *= i;
    }
    printf("The product of even numbers from 1 to %d is %d\n", n, pro);
    return 0;
}