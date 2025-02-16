#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch=='A'){
        printf("Excellent");
    } else if(ch == 'B'){
        print("Good");
    }else if(ch == 'C'){
        print("Average");
    } else if(ch== 'D'){
        print("Below Average");
    } else if(ch=='F'){
        print("Fail");
    }
    return 0;
}