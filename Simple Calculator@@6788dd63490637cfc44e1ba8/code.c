#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    printf("%d",b);
    if(c=='+'){
        printf("%d",a+b);
    }
    if(c=='-'){ 
        printf("%d",a-b);
    }if(c=='*'){ 
        printf("%d",a*b);
    }if (c=='/'){ 
        printf("%d",a/b);
    } 
    return 0;
}