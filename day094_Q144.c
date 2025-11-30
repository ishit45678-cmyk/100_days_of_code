/*Write a function that accepts a structure as parameter 
and prints its members.*/
#include <stdio.h>
struct S{int a;char b[20];float c;};
void f(struct S x){printf("%d %s %.2f\n",x.a,x.b,x.c);}
int main(){
    struct S x;
    scanf("%d%s%f",&x.a,x.b,&x.c);
    f(x);
}
