/*A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.*/
#include <stdio.h>
int main(){
    FILE *f = fopen("numbers.txt", "r");
    if(!f){ printf("Cannot open numbers.txt\n"); return 0; }
    long long sum=0;
    int x, cnt=0;
    while(fscanf(f, "%d", &x)==1){ sum += x; cnt++; }
    fclose(f);
    if(cnt==0){ printf("No numbers\n"); return 0; }
    double avg = (double)sum / cnt;
    printf("Sum=%lld Average=%.2f\n", sum, avg);
    return 0;
}
