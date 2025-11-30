/*Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved.*/
#include <stdio.h>
int main(){
    char name[200];
    int age;
    scanf("%[^\n]", name);
    scanf("%d", &age);
    FILE *f = fopen("info.txt", "w");
    if(!f){ printf("Error opening file\n"); return 0;}
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("Data saved to info.txt\n");
    return 0;
}
