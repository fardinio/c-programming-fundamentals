#include<stdio.h>
#include<math.h>
int main() {
    double X, sq,cube,sqt;
    scanf("%lf", &X);

    sq= X*X;
    cube= X*X*X;
    sqt= sqrt(X);

    printf("%.2lf\n",sq);
    printf("%.2lf\n",cube);
    printf("%.2lf\n",sqt);

    return 0;
}
