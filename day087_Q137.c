/*Create an enum for user roles (ADMIN, USER, GUEST) 
and display messages based on role.*/
#include <stdio.h>
int main(){
    enum Role { ADMIN, USER, GUEST };
    int r; scanf("%d",&r);
    enum Role role = (enum Role) r;
    if(role==ADMIN) printf("Welcome Admin\n");
    else if(role==USER) printf("Welcome User\n");
    else if(role==GUEST) printf("Welcome Guest\n");
    else printf("Invalid\n");
    return 0;
}
