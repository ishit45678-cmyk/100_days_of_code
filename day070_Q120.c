/*Write a program to take a string input.
Change it to sentence case.*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1005];
    if(scanf("%[^\n]", s)!=1) return 0;
    int i=0;
    // convert entire string to lowercase first
    while(s[i]){ s[i] = tolower((unsigned char)s[i]); i++; }
    // find first alphabetic char and uppercase it
    i=0;
    while(s[i] && !isalpha((unsigned char)s[i])) i++;
    if(s[i]) s[i] = toupper((unsigned char)s[i]);
    printf("%s\n", s);
    return 0;
}
