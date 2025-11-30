//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>   
int main() {
    double principal, rate, time , n;
    double simpleInterest, compoundInterest;
    printf("Enter Principal, Rate(%%), Time (in years), and n (compounds per year): ");
    scanf("%lf %lf %lf %lf", &principal, &rate, &time , &n);
    simpleInterest = (principal * rate * time) / 100.0;
    compoundInterest = principal * (pow((1 + rate / (100.0*n)), n*time) - 1);
    printf("Simple Interest=%lf, Compound Interest=%lf\n", simpleInterest, compoundInterest);

    return 0;
}