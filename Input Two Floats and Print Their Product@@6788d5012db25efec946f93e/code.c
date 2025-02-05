#include <stdio.h>

int main() {
    float num1, num2, product;
   
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, product);
    return 0;
}
