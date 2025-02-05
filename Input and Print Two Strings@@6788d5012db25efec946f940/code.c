#include <stdio.h>

int main() {
    char str1[100], str2[100];

    
    fgets(str1, sizeof(str1), stdin); // Read the first string

 
    fgets(str2, sizeof(str2), stdin); // Read the second string

    printf("You entered:\n");
    printf("First string: %s", str1);
    printf("Second string: %s", str2);

    return 0;
}
