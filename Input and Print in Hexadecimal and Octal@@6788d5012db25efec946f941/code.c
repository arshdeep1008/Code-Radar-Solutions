#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("The number in hexadecimal is: %X\n", num);
    printf("The number in octal is: %o\n", num);

    return 0;
}
