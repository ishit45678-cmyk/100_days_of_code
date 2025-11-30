/*Show that enums store integers by printing assigned values.*/
#include <stdio.h>
int main(){
    enum Num { X=5, Y=10, Z=15 };
    printf("%d %d %d\n", X, Y, Z);
    return 0;
}
