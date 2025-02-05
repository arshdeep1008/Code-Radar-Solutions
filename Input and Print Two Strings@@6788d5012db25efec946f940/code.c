#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 

    printf("You entered:\n");
    printf("First string: %s", str1);
    printf("Second string: %s", str2);

    return 0;
}
