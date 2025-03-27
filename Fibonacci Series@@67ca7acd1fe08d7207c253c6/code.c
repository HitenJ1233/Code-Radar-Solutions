#include <stdio.h>
int fibonacciSeries(int n){
    int a=1;
    int b=1;
    int sum=1;
    for (int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return sum;

}