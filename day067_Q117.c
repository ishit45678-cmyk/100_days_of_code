/*Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. 
Print the merged array.*/
#include <stdio.h>
int main(){
    int m,n;
    if(scanf("%d %d",&m,&n)!=2) return 0;
    int A[m], B[n];
    for(int i=0;i<m;i++) scanf("%d",&A[i]);
    for(int i=0;i<n;i++) scanf("%d",&B[i]);
    int i=0,j=0;
    int first=1;
    while(i<m && j<n){
        int val = (A[i] <= B[j]) ? A[i++] : B[j++];
        if(!first) printf(" ");
        printf("%d", val);
        first = 0;
    }
    while(i<m){ if(!first) printf(" "); printf("%d", A[i++]); first=0; }
    while(j<n){ if(!first) printf(" "); printf("%d", B[j++]); first=0; }
    printf("\n");
    return 0;
}
