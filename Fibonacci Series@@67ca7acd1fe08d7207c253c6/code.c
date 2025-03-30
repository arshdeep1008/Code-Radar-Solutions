#include<stdio.h>

fab(int n);
int main(){
    int n;
    scanf("%d",n);
    if (n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fab(n);
}

fab(int n){
    if(fab(n)==1){
        return 1;
    }
    if (fab(n)==0){
        return 0;
    }
    f1 = fab(n-1);
    f2 = fab(n-2);
    fab(n) = f1 + f2;
}