#include<stdio.h>
int main() {
    double C, F;
    scanf("%lf", &C);

    F=((9*C)+160)/5;
    printf("%.2lf", F);

    return 0;
}
