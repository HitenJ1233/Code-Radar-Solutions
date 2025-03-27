#include <stdio.h>
int fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c=0;
    int sum=0;
    for (int i=1;i<=n;i++){
        printf("%d ",sum);
        sum=a+c;
        a=b;
        b=sum;
    }
    return sum;

}