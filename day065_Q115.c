/*Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, 
meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram".*/
#include <stdio.h>
#include <string.h>
int main(){
    char s[10005], t[10005];
    if(scanf("%s %s", s, t)!=2) return 0;
    int f[26]={0};
    for(int i=0;s[i];i++) f[s[i]-'a']++;
    for(int i=0;t[i];i++) f[t[i]-'a']--;
    for(int i=0;i<26;i++) if(f[i]!=0){ printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}
