/*Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters.*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char fname[200];
    if(scanf("%s", fname)!=1) return 0;
    FILE *f = fopen(fname,"r");
    if(!f){ printf("Cannot open\n"); return 0; }
    int ch; int vowels=0, consonants=0;
    while((ch=fgetc(f))!=EOF){
        if(isalpha(ch)){
            char lc = tolower(ch);
            if(lc=='a'||lc=='e'||lc=='i'||lc=='o'||lc=='u') vowels++;
            else consonants++;
        }
    }
    fclose(f);
    printf("Vowels=%d Consonants=%d\n", vowels, consonants);
    return 0;
}
