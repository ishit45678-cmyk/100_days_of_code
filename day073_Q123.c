/*Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char fname[200];
    if(scanf("%s", fname)!=1) return 0;
    FILE *f = fopen(fname, "r");
    if(!f){ printf("Cannot open file\n"); return 0; }
    int ch, chars=0, words=0, lines=0;
    int inword=0;
    while((ch=fgetc(f))!=EOF){
        chars++;
        if(ch=='\n') lines++;
        if(!isspace(ch) && !inword){ inword=1; words++; }
        if(isspace(ch)) inword=0;
    }
    fclose(f);
    printf("Characters=%d Words=%d Lines=%d\n", chars, words, lines);
    return 0;
}
