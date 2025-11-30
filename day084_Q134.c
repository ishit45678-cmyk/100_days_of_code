/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, 
and print messages accordingly.*/
#include <stdio.h>
int main(){
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status s;
    int x; scanf("%d",&x);
    s = (enum Status)x;
    if(s==SUCCESS) printf("Success\n");
    else if(s==FAILURE) printf("Failure\n");
    else if(s==TIMEOUT) printf("Timeout\n");
    else printf("Invalid\n");
    return 0;
}
