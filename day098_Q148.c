/*Take two structs as input and check if they are identical.*/
#include <stdio.h>
#include <string.h>
struct S{int a;char b[20];float c;};
int main(){
    struct S x,y;
    scanf("%d%s%f",&x.a,x.b,&x.c);
    scanf("%d%s%f",&y.a,y.b,&y.c);
    if(x.a==y.a && strcmp(x.b,y.b)==0 && x.c==y.c) printf("Same");
    else printf("Not Same");
}
