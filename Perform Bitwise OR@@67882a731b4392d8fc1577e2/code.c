#include <stdio.h>

int main() {
    int num1, num2, result;
    scanf("%d%d", &num1, &num2);
    result = num1 | num2; 
    printf("The result of bitwise OR operation is: %d\n", result);
    return 0;
}
