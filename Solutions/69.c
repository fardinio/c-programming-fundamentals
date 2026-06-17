#include<stdio.h>
int main() {
    int ara[1000],n,x,i,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++) {
        if(ara[i]==x) {
            printf("%d at found position %d\n",x,i);
            found =1;
            break;
        }
    }
    if(found!=1){
        printf("%d not found\n",x);
    }
    return 0;
}
