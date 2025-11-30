/*Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.*/
#include <stdio.h>
int main(){
    int m;
    if(scanf("%d", &m)!=1) return 0;
    FILE *f = fopen("students.txt", "w");
    if(!f){ printf("Cannot open file\n"); return 0; }
    for(int i=0;i<m;i++){
        char name[100]; int roll; float marks;
        getchar(); // consume newline
        scanf("%[^\n]", name);
        scanf("%d %f", &roll, &marks);
        fprintf(f, "%s\n%d %.2f\n", name, roll, marks);
    }
    fclose(f);
    // now read back
    f = fopen("students.txt", "r");
    if(!f){ printf("Cannot reopen file\n"); return 0; }
    char name[100];
    int roll; float marks;
    while(fgets(name, sizeof(name), f)){
        // name includes newline
        name[strcspn(name, "\n")] = '\0';
        if(fscanf(f, "%d %f\n", &roll, &marks)==2){
            printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
        }
    }
    fclose(f);
    return 0;
}
