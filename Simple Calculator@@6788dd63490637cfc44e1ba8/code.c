// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d ",&a,&b);
    scanf(" %c",&c);
    switch(c){
        case '+':
        printf(a+b);
        break;
        case '-':
        printf(a-b);
        break;
        case '*':
        printf(a*b);
        break;
        case '/':
        printf(a/b);
        break;
        default:
        printf("erro");
    }

    return 0;
}