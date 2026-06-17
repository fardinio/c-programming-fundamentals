#include<stdio.h>
int main() {
    int n,r,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d",&r);
        if(r==4 || r==6) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
