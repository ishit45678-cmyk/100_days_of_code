//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a , b , sum , diff , prod , div;
    printf("Enter two integers : ");
    scanf("%d %d", &a , &b);
    sum = a + b;
    diff = a - b;
    prod = a*b;
    if (b!=0){
    div = a/b;
    printf("Sum = %d , Difference = %d , Product = %d , Quotient = %d ", sum , diff , prod , div);
    }
    else{
    printf("Division by Zero is not possible.");}
    return 0;
}