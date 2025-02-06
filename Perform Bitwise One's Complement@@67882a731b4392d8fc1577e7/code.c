#include <stdio.h>

int main() {
    int num, ones_complement;
   
    scanf("%d", &num);
    ones_complement = ~num; // One's complement operation
    printf(" %d\n", num, ones_complement);
    return 0;
}
