#include <stdio.h>
int isPrime(int num){
    int a=1;
    for (int i=2;i<num;i++){
        if (num%i==0){
            return 1;
            break;
        }
        else {
                return 0;
            }
    } 
}
