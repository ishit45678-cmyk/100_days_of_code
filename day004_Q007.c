//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a ,b;
    printf("enter first number : ");
    scanf("%d" , &a);
    printf("enter the second number : ");
    scanf("%d" , &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swapped numbers are %d ,%d " ,a ,b);
    return 0;
}