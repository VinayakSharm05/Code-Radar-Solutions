// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d ",&a,&b);
    scanf(" %c",&c);
    switch(c){
        case '+':
        printf("%i",a+b);
        break;
        case '-':
        printf("%i",a-b);
        break;
        case '*':
        printf("%i",a*b);
        break;
        case '/':
        if(b==0){
            printf("error");

        }
        else{
            printf("%i",a/b);
        }
        break;
        default:
        printf("error");
        break;
    }

    return 0;
}