#include <stdio.h>
#include <math.h> 

int main() {
    double value;
    scanf("%d",&value)
    double result = sqrt(value);
    if (value==int(result)){
         printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}