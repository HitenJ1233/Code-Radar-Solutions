#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int a= j+64;
            char c = (char)a;
            printf("%c ",c);
        }printf("\n");
    }   return 0;
}