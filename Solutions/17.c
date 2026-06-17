#include<stdio.h>
int main() {
    char a,b,tem;
    scanf("%c %c",&a,&b);
    tem=a;
    a=b;
    b=tem;

    printf("%c %c\n",a,b);
    return 0;
}
