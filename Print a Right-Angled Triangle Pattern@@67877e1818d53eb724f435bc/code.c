#include <stdio.h>

int main() {
    int i, j, rows;
 
    scanf("%d", &rows);

    for (i = 1; i <= 1; ++i) {
        for (j = rows; j >= i; --j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

