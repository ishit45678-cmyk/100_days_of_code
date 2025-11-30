//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
    int num;
    printf("Enter Your Number: ");
    scanf("%d" , &num);
    if(num%2== 0)
    printf("%d is Even",num);
    else
    printf("%d is Odd",num);
    return 0;
}