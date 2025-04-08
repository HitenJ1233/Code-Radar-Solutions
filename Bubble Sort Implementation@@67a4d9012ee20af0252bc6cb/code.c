#include <stdio.h>
void bubbleSort(x,y){
    for (int i=0;i<=x-1;i++){
        for (int j=0;j<y-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}