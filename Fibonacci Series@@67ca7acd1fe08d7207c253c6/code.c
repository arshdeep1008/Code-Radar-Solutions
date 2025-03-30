#include <stdio.h>

int fab(int n); // Function declaration

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Use & to pass the address of 'n'

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Print the result of the Fibonacci calculation
    printf("Fibonacci number at position %d is: %d\n", n, fab(n));
    return 0;
}

int fab(int n) { // Function definition
    if (n == 1 || n == 2) { // Base case: First two Fibonacci numbers are 1
        return 1;
    }
    return fab(n - 1) + fab(n - 2); // Recursive case
}
