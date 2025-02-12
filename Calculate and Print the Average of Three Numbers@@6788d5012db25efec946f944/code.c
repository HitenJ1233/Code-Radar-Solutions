#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);
    float d = (a+b+c)/3;
    printf("You entered: %.2f",d);
    return 0;
}