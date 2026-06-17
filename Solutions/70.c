#include<stdio.h>
int main() {
    int ara[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++) {
        if(ara[i]%2!=0) {
            printf("%d ",ara[i]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++) {
        if(ara[i]%2==0) {
            printf("%d ",ara[i]);
        }
    }
    printf("\n");
    return 0;
}
