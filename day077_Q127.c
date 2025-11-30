/*Write a program that reads text from input.txt, 
converts all lowercase letters to uppercase, 
and writes the result to output.txt.*/
#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");
    if(!in || !out){ printf("File error\n"); return 0; }
    int ch;
    while((ch=fgetc(in))!=EOF){
        if(islower(ch)) ch = toupper(ch);
        fputc(ch, out);
    }
    fclose(in); fclose(out);
    printf("Converted and written to output.txt\n");
    return 0;
}
