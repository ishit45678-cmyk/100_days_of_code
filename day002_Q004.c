//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
int main(){
    double r;
    printf("Enter the radius of the circle : ");
    scanf("%lf" , &r);
    double pi = acos(-1.0);
    printf("Area = %lf , Perimeter = %lf",pi*r*r , 2*pi*r);
    return 0;
}