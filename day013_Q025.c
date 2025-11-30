//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    double num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch(op) {
        case '+':
            printf("%.4lf + %.4lf = %.4lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.4lf - %.4lf = %.4lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.4lf * %.4lf = %.4lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.4lf / %.4lf = %.4lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}