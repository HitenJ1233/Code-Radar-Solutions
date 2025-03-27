#include <stdio.h>
int fibonacciSeries(int n){
    int a=1;
    int b=0;
    int sum=0;
    for (int i=0;i<n;i++){
        printf("%d ",sum);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}