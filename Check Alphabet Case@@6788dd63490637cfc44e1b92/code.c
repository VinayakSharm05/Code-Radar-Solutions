// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else if(isnumber(a)){
        printf("Not an alphabet");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}