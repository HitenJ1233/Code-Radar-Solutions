#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1 ;i<=10; i++){
        printf("\n%d x %d = %d ",n,i,i*n);
    }return 0;
}