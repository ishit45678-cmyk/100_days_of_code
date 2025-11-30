//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(){
  float temp1 ;
  int decision;
  printf("Enter the Operation you want to do : 1.Celsius To Fahrenhiet 2.Fahrenhiet To Celsius\n");
  scanf("%d" , &decision);
  if (decision == 1) 
  {
    printf("Enter the temperature in celsius: ");
    scanf("%f" , &temp1);
    printf("The Given temperature in Fahrenhiet is %f\n" , (temp1*9)/5 + 32);
  }
  else if (decision == 2)
  {
    printf("Enter the temperature in Fahrenhiet: ");
    scanf("%f" , &temp1);
    printf("The Given temperature in Celsius is %f\n" , ((temp1 - 32)*5/9));
  }
  else
  printf("Invalid Input");
  return 0;
}