#include <stdio.h>
int main(){
    int a,b,sum,sub,prod,div;
    char c;
    scanf("%d%d",&a,&b);
    scanf("%c",&c);
    sum = a+b;
    sub = a-b;
    prod = a*b;
    div = a/b;
    if (c == '+'){
        printf("%d",sum);
    }
    else if(c == '-'){
        printf("%d",sub);
    }
    else if(c == '*'){
        printf("%d",prod);
    }
    else{
        printf("%d",div);
    }
}