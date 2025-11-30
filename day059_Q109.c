/*Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>
int main(){
    int n,k;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    if(k>n){ printf("0\n"); return 0; }
    long long sum=0;
    for(int i=0;i<k;i++) sum += a[i];
    long long maxsum = sum;
    for(int i=k;i<n;i++){
        sum += a[i] - a[i-k];
        if(sum > maxsum) maxsum = sum;
    }
    printf("%lld\n", maxsum);
    return 0;
}