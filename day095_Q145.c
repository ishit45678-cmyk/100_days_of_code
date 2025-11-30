/*Return a structure containing top student's details from a function.*/
#include <stdio.h>
struct S{int a;char b[20];float c;};
struct S top(struct S x[],int n){
    struct S m=x[0];
    int i;
    for(i=1;i<n;i++) if(x[i].c>m.c) m=x[i];
    return m;
}
int main(){
    struct S x[5],t;
    int i;
    for(i=0;i<5;i++) scanf("%d%s%f",&x[i].a,x[i].b,&x[i].c);
    t=top(x,5);
    printf("%d %s %.2f\n",t.a,t.b,t.c);
}
