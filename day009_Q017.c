//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
    double a ,r1 ,r2 ,b ,c , d;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a != 0) {
        d = b * b - 4 * a * c;
        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are different: %lf and %lf\n", r1, r2);
        } else if (d == 0) {
            r1 = r2 = -b / (2 * a);
            printf("Roots are real and same: %lf\n", r1);
        } else {
            double real = -b / (2 * a);
            double imag = sqrt(-d) / (2 * a);
            printf("Roots are complex: %lf + %lfi and %lf - %lfi\n", real, imag, real, imag);
        }
    } else {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
    }
    return 0;
}