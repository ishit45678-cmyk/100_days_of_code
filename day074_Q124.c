/*Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().*/
#include <stdio.h>
int main(){
    char sname[200], dname[200];
    if(scanf("%s %s", sname, dname)!=2) return 0;
    FILE *fs = fopen(sname, "r");
    if(!fs){ printf("Cannot open source\n"); return 0; }
    FILE *fd = fopen(dname, "w");
    if(!fd){ printf("Cannot open destination\n"); fclose(fs); return 0; }
    int ch;
    while((ch=fgetc(fs))!=EOF) fputc(ch, fd);
    fclose(fs); fclose(fd);
    printf("Copied\n");
    return 0;
}
