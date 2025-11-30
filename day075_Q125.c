/*Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.*/
#include <stdio.h>
int main(){
    char fname[200];
    if(scanf("%s", fname)!=1) return 0;
    getchar(); // consume newline
    char line[500];
    fgets(line, sizeof(line), stdin); // read the line to append
    FILE *f = fopen(fname, "a");
    if(!f){ printf("Cannot open file\n"); return 0; }
    fprintf(f, "%s", line);
    fclose(f);
    printf("Appended\n");
    return 0;
}
