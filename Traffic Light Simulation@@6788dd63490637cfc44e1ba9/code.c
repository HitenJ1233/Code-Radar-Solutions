#include <stdio.h>
int main(){
    char sgnl;
    scanf("%c",&sgnl);
    if (sgnl=='R'){
        printf("Stop");
    } else if(sgnl=='G'){
        printf("Go");
    } else if(sgnl=='Y'){
        printf("Slow Down");
    } else{
        printf("Invalid input");
    } 
    return 0;
}