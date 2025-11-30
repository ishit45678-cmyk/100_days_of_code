/*Define a struct with enum Gender and print person's gender.*/
#include <stdio.h>
typedef enum { MALE, FEMALE, OTHER } Gender;
typedef struct { char name[100]; Gender g; } Person;
int main(){
    Person p;
    scanf("%[^\n]", p.name);
    int gi; scanf("%d", &gi);
    p.g = (Gender)gi;
    printf("%s -> ", p.name);
    if(p.g==MALE) printf("Male\n");
    else if(p.g==FEMALE) printf("Female\n");
    else printf("Other\n");
    return 0;
}
