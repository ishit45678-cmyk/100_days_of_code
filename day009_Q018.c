//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
#include <stdio.h>
int main() {
    int num;
    printf("Enter the Percentage: ");
    scanf("%d", &num);

    if (num >= 90 && num <= 100)
        printf("Grade A");
    else if (num >= 80 && num <= 89)
        printf("Grade B");
    else if (num >= 70 && num <= 79)
        printf("Grade C");
    else if (num >= 60 && num <= 69)
        printf("Grade D");
    else if (num >= 0 && num < 60)
        printf("Grade F");
    else
        printf("Invalid percentage entered");

    return 0;
}