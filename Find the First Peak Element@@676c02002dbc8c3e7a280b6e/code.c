#include <stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}