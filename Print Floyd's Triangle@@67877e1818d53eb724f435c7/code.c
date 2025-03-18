#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=i;j++){
            printf("%d",a);
            a=a+1;
        }printf("\n");
    } return 0;
}