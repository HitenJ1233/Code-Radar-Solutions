#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char c = (char)j;
            printf("%c ",c);
        }printf("\n");
    }   return 0;
}