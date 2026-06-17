#include<stdio.h>
int main() {
    int n=5,r,i,j,score;
    double arv[n];
    for(i=0;i<n;i++) {
            score=0;
        for(j=1;j<=10;j++) {
            scanf("%d",&r);
            score+=r;
        }
        arv[i]=score/10.0;
    }
    int max_arv=0;
    int topscorer=0;
    for(i=0;i<5;i++) {
        if(arv[i]>max_arv) {
            max_arv=arv[i];
            topscorer=i+1;
        }
    }
    printf("%d",topscorer);
    return 0;
}
