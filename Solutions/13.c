#include<stdio.h>
int main() {
    int m1,m2,m3;
    double avr;

    scanf("%d %d %d",&m1,&m2,&m3);
    avr=((m1+m2+m3)/3);

    printf("%.2lf", avr);
    return 0;
}
