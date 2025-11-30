/*Define a structure Student with name, roll_no, and marks, then read 
and print one student's data.*/
#include <stdio.h>
typedef struct { char name[100]; int roll_no; float marks; } Student;
int main(){
    Student s;
    scanf("%[^\n]", s.name);
    scanf("%d %f", &s.roll_no, &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
