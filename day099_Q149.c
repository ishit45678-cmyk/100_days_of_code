/*Use malloc() to allocate structure memory dynamically and print details.*/
#include <stdio.h>
#include <stdlib.h>
struct S{int a;char b[20];float c;};
int main(){
    struct S *x=malloc(sizeof(struct S));
    scanf("%d%s%f",&x->a,x->b,&x->c);
    printf("%d %s %.2f\n",x->a,x->b,x->c);
    free(x);
}
