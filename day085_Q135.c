/*Assign explicit values starting from 10 and print them.*/
#include <stdio.h>
int main(){
    enum E { A=10, B, C, D };
    printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
    return 0;
}
