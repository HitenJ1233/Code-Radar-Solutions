#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int k=0;k<=n-i-1;k++){
            printf(" ");
        }
        for (int j=1;j<=2*i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}