#include<stdio.h>
int main() {
    double bur,lol,jui,total,bill;
    int nb, nl, nj;

    scanf("%lf %d", &bur,&nb);
    scanf("%lf %d", &lol,&nl);
    scanf("%lf %d", &jui,&nj);

    total= bur*nb + lol*nl + jui*nj;

    if(total>5000) {
        bill=total-total*0.10;
    }
    else if(total>20000) {
        bill=total-total*0.20;
    }
    if(bill>50000) {
        printf("ATM e jete hobe\n");
    }
    else {
        printf("ATM e jete hobe na\n");
    }
        return 0;
}
