#include<stdio.h>
#include<math.h>
int main() {
    double h,w,d,v,peo;
    scanf("%lf %lf %lf",&h,&w,&d);

    v=h*w*d*1000000;
    peo=ceil(v/100);

    printf("%.lf", peo);
    return 0;
}
