/*Use pointer to struct to modify and display data using -> operator.*/
#include <stdio.h>

struct S{int a;char b[20];float c;};

int main(){
    struct S x, *p;
    p=&x;
    scanf("%d%s%f",&p->a,p->b,&p->c);
    p->a=p->a+10;
    p->c=p->c+5.5;
    printf("%d %s %.2f\n",p->a,p->b,p->c);
}
