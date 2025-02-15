#include <stdio.h>
#include <ctype.h>  // for isupper() and islower()

int main() {
    char a;
    scanf("%c", &a);  // Read the input character

    // Check if the character is uppercase
    if (isupper(a)) {
        printf("Uppercase");
    }
    // Check if the character is lowercase
    else if (islower(a)) {
        printf("Lowercase");
    }
    // If it's neither uppercase nor lowercase
    else {
        printf("Not an alphabetic character");
    }

    return 0;
}
