#include <stdio.h>
int main(){
    int n;
    // printf("enter a number: ");
    scanf("%d",&n);
    for(int i=3; i<=n; i++){
        if (n%i==0){
            printf("Not prime Number");
            break;
        } else{
            printf("prime number");
            break;
        }
    }
    return 0;
}