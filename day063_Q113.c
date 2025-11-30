/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array.
 Print the kth smallest element as output.*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p, const void *q){ return (*(int*)p - *(int*)q); }
int main(){
    int n,k;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    if(k<1 || k>n){ printf("Invalid\n"); return 0; }
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k-1]);
    return 0;
}
