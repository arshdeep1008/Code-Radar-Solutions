#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false; // Numbers <= 1 are not prime
    for (int i = 2; i * i <= n; i++) { // Check divisors up to square root of n
        if (n % i == 0) return false; // If divisible by i, not prime
    }
    return true; // If no divisors found, number is prime
}

int main() {
    int number = 29; // Example number
    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
