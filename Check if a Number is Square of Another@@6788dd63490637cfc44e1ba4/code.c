#include <stdio.h>
#include <math.h> 

int main() {
    double value = 9.0;
    double result = sqrt(value);
    if (value==result){
         printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}