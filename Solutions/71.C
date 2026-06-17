#include<stdio.h>
int main() {
    double u,t,a,s,d,count=0;
    scanf("%lf %lf",&u,&a);
    t=5*60;
    for(int i=1;i<=t;i++) {
        s =((u*i)+(0.5*a*i*i));
        printf("%.1lf\n",s);
    }
    scanf("%lf",&d);
    if(s>=d) {
        printf("Hagu korte parbe\n");
    }
    else{
        printf("Hagu korte parbe na\n");
    }
    return 0;

}
