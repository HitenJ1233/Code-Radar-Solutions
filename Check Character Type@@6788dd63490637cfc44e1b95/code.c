#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    if (isalpha(ch)){
        if (ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel");
        } else{
            printf("Constant");
        }
        } else if(isdigit(ch)){
            printf("Digit");
        } else{
            printf("Special Character");
        }
        return 0;
}