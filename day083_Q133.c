/*Create an enum for months and print how many days each month has.*/
#include <stdio.h>
int main(){
    enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; // index by month
    for(int m=JAN;m<=DEC;m++) printf("%d -> %d days\n", m, days[m]);
    return 0;
}
