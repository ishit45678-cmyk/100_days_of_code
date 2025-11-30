//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1 ;i <= n ; i++){
        if (n % i == 0 && i<=(n/i)){
            printf("(%d x %d) ,(%d x %d),\n", i , n/i , n/i , i);
        }
    }
    return 0;
}