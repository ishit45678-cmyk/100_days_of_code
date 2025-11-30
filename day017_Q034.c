//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (int i = 2; i * i <= n; i++) {  // check up to sqrt(n)
            if (n % i == 0) {
                isPrime = 0; // divisible by i
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}