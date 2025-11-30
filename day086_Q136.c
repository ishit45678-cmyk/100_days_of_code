/*Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) 
and perform operations using switch.*/
int main(){
    enum Op { ADD=1, SUBTRACT=2, MULTIPLY=3 };
    int choice; scanf("%d", &choice);
    int x,y; scanf("%d %d", &x, &y);
    switch(choice){
        case ADD: printf("%d\n", x+y); break;
        case SUBTRACT: printf("%d\n", x-y); break;
        case MULTIPLY: printf("%d\n", x*y); break;
        default: printf("Invalid\n");
    }
    return 0;
}
