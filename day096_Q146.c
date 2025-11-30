/*Create Employee structure with nested Date structure for joining date and print details.*/
#include <stdio.h>
struct D{int a,b,c;};
struct E{int a;char b[20];struct D d;};
int main(){
    struct E x;
    scanf("%d%s%d%d%d",&x.a,x.b,&x.d.a,&x.d.b,&x.d.c);
    printf("%d %s %d-%d-%d\n",x.a,x.b,x.d.a,x.d.b,x.d.c);
}
