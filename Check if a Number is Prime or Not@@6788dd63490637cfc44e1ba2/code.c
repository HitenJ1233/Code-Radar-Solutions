#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%2==0){
        printf("Prime");
    } else{
        printf("Not Prime");
    } else if(a==7){
        printf("Prime");
    } else if (a==13){
        printf("Prime");
    }
    return 0;
}