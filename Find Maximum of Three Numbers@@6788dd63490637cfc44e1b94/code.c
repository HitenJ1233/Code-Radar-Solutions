#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b && a>c){
        printf("%d",a);
    } else if(b>a && b>c){
        printf("%d",b);
    } else if(c>a && c>b){
        printf("%d",c);
    }
    return 0;
}