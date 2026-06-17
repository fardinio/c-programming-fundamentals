#include<stdio.h>
int main() {
    int n,i,r,score=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&r);
        score+=r;
    }
    printf("%d\n",score);
    return 0;
}
