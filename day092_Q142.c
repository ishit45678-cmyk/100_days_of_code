/*Store details of 5 students in an array of structures and print all.*/
#include <stdio.h>
struct S{int a;char b[20];float c;};
int main(){
    struct S x[5];
    int i;
    for(i=0;i<5;i++) scanf("%d%s%f",&x[i].a,x[i].b,&x[i].c);
    for(i=0;i<5;i++) printf("%d %s %.2f\n",x[i].a,x[i].b,x[i].c);
}
