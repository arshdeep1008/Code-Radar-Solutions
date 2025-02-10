int main() {
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}   