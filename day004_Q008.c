//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main(){
    int n ,sum;
    printf("Enter the last number for sum: ");
    scanf("%d", &n);
    sum = n*(n+1)/2;
    printf("Sum is %d", sum);
    return 0;
}