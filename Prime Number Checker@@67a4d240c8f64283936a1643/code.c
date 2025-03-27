#include <stdio.h>
int isprime(int num){
    int a=1;
    for (int i=2;i<=num;i++){
        if (i%2==0){
            a=1;
            continue;
        }
        else {
                a=0;
            }
    } return a;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    return 0;
}