#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if (c == 'R'){
        printf("Go");
    }
    else if( c == 'G'){
        printf("Stop");
    }
    else if ( c == 'Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}