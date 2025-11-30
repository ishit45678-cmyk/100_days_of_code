/*Write a program to take an integer array arr as input. 
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. 
If all elements are negative, print the largest (least negative) element.*/
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long max_ending = a[0], max_so_far = a[0];
    for(int i=1;i<n;i++){
        if(max_ending < 0) max_ending = a[i];
        else max_ending += a[i];
        if(max_ending > max_so_far) max_so_far = max_ending;
    }
    printf("%lld\n", max_so_far);
    return 0;
}
