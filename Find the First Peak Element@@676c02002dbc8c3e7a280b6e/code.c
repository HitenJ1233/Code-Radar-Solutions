#include <stdio.h>
int main(){
    int arr[n];
    int n;
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){x
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } printf("%d",arr[n-1]);
    return 0;
}