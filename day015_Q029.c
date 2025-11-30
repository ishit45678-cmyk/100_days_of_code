//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{   unsigned long long factorial = 1;
    int fact;
    int i=1;
    printf("Enter the number for Factorial: ");
    scanf("%d" , &fact);
    while(i <= fact)
    {
        factorial *= i;
        i = i+1;
    }
    printf("The Factorial of the given number is %llu", factorial);
    return 0;
}