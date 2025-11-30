/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.*/
#include <stdio.h>
int main(){
    char line[1000];
    FILE *f = fopen("info.txt", "r");
    if(!f){ printf("Cannot open file\n"); return 0; }
    while(fgets(line, sizeof(line), f)){
        printf("%s", line);
    }
    fclose(f);
    return 0;
}
