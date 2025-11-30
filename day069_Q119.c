/*Write a program to take an integer array as input. 
Only one element will be repeated. 
Print the repeated element. 
Try to find the result in one single iteration.*/
#include <stdio.h>
#include <stdlib.h>

unsigned int hash(unsigned int x, unsigned int size){ return (x * 2654435761u) % size; }

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int size = 1;
    while(size < 2*n) size <<= 1;
    int *keys = malloc(size * sizeof(int));
    char *used = malloc(size * sizeof(char));
    for(int i=0;i<size;i++) used[i]=0;
    int val;
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        unsigned int h = hash((unsigned int)val, size);
        while(used[h]){
            if(keys[h]==val){
                printf("%d\n", val);
                free(keys); free(used);
                return 0;
            }
            h = (h+1) & (size-1);
        }
        used[h]=1;
        keys[h]=val;
    }
    // If not found (shouldn't happen per problem), print -1
    printf("-1\n");
    free(keys); free(used);
    return 0;
}
