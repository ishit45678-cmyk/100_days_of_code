/*Define an enum for traffic lights (RED, YELLOW, GREEN) 
and print 'Stop', 'Wait', or 'Go' based on its value.*/
#include <stdio.h>
int main(){
    enum Light { RED, YELLOW, GREEN };
    enum Light l;
    int x;
    scanf("%d",&x); // 0->RED,1->YELLOW,2->GREEN
    l = (enum Light)x;
    switch(l){
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid\n");
    }
    return 0;
}
