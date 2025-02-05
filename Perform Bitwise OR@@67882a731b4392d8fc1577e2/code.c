#include <stdio.h>

int main() {
    int a, b, n;
   
    scanf("%d%d", &a, &b);
    n = a ^ b; // Bitwise XOR operator
    printf("%d\n", n);
    return 0;
}
