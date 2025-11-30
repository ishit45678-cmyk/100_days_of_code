/*Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output.*/
#include <stdio.h>
int main(){
    int n,k;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=0;i<=n-k;i++){
        int mx = a[i];
        for(int j=i+1;j<i+k;j++) if(a[j]>mx) mx=a[j];
        if(i) printf(" ");
        printf("%d", mx);
    }
    printf("\n");
    return 0;
}