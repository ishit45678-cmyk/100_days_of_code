//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    int costPrice , sellPrice ,profit ,loss ,diff;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d",&costPrice , &sellPrice );
    diff= (sellPrice-costPrice)/100;
    if (diff > 0){
        printf("Profit , %d%%\n", diff);
    }
    else if (diff < 0 ){
        printf("Loss , %d%%\n", diff);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}