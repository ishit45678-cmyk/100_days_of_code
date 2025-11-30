/*Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. 
Print that missing number*/
#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int x;
    long long sum=0;
    for(int i=0;i<n;i++){ scanf("%d",&x); sum += x; }
    long long total = (long long)n*(n+1)/2; // because numbers are 0..n
    long long missing = total - sum;
    printf("%lld\n", missing);
    return 0;
}
