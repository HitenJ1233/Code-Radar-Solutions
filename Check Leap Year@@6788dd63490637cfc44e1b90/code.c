#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if ((a%4==0 && a%100 != 0)|| (a%400==0)){
        printf("Leep year");
    } else{
        printf("Not a leep year");
    }
    return 0;
}