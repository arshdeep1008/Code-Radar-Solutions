#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a == 1){
        printf("*");
    }
    if (a == 2){
        printf("*");
        printf("**");
    }
    if (a == 3){
        printf("*");
        printf("**");
        printf("***");
    }
}