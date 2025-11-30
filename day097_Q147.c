/*Store employee data in a binary file using fwrite() and read using fread().*/
#include <stdio.h>
struct E{int a;char b[20];float c;};
int main(){
    struct E x,y;
    FILE *f;
    scanf("%d%s%f",&x.a,x.b,&x.c);
    f=fopen("e.bin","wb");
    fwrite(&x,sizeof(x),1,f);
    fclose(f);
    f=fopen("e.bin","rb");
    fread(&y,sizeof(y),1,f);
    fclose(f);
    printf("%d %s %.2f\n",y.a,y.b,y.c);
}
