/*Ask the user for a filename. 
Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; 
otherwise, read and display its content.*/
#include <stdio.h>
int main(){
    char fname[200];
    if(scanf("%s", fname)!=1) return 0;
    FILE *f = fopen(fname, "r");
    if(!f){ printf("File does not exist\n"); return 0; }
    char line[1000];
    while(fgets(line, sizeof(line), f)) printf("%s", line);
    fclose(f);
    return 0;
}
