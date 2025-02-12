#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a); // Input for a
    scanf("%d", &b); // Input for b

    // Corrected condition: Use lowercase 'b' instead of 'B'
    if ((!(a > 0)) && (!(b > 0))) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
