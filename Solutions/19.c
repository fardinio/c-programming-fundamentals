#include<stdio.h>
int main() {
    int d,m,y;
    scanf("%d",&d);

    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;

    printf("%d %d %d", y,m,d);
    return 0;
}
