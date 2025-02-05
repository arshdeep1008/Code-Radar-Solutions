#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];

    // Input name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // Consume newline character left by scanf

    // Input hobby
    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    // Print the details
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);

    return 0;
}
