#include<stdio.h>
int main() {
    double bs,hs,al=5000,tax,ths;

    scanf("%lf", &bs);

    hs = bs/2;
    tax = ((bs+hs+al)*0.20) ;
    ths = (bs+hs+al)-tax;

    printf("%.2lf\n", ths);
    return 0;

}
