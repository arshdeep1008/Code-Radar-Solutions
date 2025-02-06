#include <stdio.h>
int main(){
    int a,res,shift;
    scanf("%d%d",&a,&shift);
    res = a << shift ;
    printf("%d",res);
    return 0;
}