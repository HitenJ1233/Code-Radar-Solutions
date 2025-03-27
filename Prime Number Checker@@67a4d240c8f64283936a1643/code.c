#include <stdio.h>
int isPrime(int num){
    int a=1;
    for (int i=2;i<num;i++){
        if (num%i==0){
            a=1;
            break;
        }
        else {
                a=0;
            }
    } return a;
}
