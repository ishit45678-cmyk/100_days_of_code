//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h> 
int main() 
{int length , breadth ; 
    printf("Enter the Length of the Rectangle: ");
    scanf("%d", &length);
    printf("Enter the Breadth of the Rectangle: ");
    scanf("%d" , &breadth);
    printf("The Area of the Rectangle is %d and Perimeter is %d" , length*breadth , 2*(length + breadth));
    return 0; 
} 