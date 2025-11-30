//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
    int time, hour, minutes , seconds;
    printf("Enter the time you want in seconds\n: ");
    scanf("%d" , &time);
    hour  = time/3600;
    minutes = (time%3600)/60;
    seconds = time%60;
    printf("%d : %d : %d" , hour , minutes , seconds);
    return 0;
}