/*Find and print the student with the highest marks.*/
#include <stdio.h>
struct S{int a;char b[20];float c;};
int main(){
    struct S x[5],m;
    int i;
    for(i=0;i<5;i++) scanf("%d%s%f",&x[i].a,x[i].b,&x[i].c);
    m=x[0];
    for(i=1;i<5;i++) if(x[i].c>m.c) m=x[i];
    printf("%d %s %.2f\n",m.a,m.b,m.c);
}
