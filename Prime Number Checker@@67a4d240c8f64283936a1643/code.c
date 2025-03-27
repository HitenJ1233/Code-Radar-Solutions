#include <stdio.h>
int isPrime(int num){
    int a=0;
    for (int i=1;i<=num;i++){
        if (num%i==0){
            a++;
        }
    }
    if (a==2){
        return 1;
    } else{
        return 0;
    }
    return 0;
}
