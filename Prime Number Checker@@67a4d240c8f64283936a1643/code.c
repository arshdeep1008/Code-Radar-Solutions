#include<stdio.h>
def is_prime(n):
    if n <= 1:  # Numbers less than or equal to 1 are not prime
        return False
    for i in range(2, int(n ** 0.5) + 1):  # Check divisors up to square root of n
        if n % i == 0:
            return False  # If divisible by i, not prime
    return True  # If no divisors found, number is prime

int main{
number = 29
print(f"{number} is a prime number: {is_prime(number)}")
}