#include <stdio.h>
int fibonacciSeries(int n){
    int a=1;
    int b=1;
    int sum=0;
    for (int i=1;i<=n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        prinf("%d ",sum);
    }
    return;

}