// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
    
        default:
        printf("Invalid input");
        break;
        
    }

}