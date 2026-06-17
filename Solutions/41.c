#include<stdio.h>
int main () {
    int i,n,a,b;
    for(i=50;i>=1;i--) {
        printf("%d\n",i);
    }
    scanf("%d",&n);
    for(i=n;i>=1;i--) {
        printf("%d\n",i);
    }
    scanf("%d %d",&a,&b);
    for(i=a;i>=b;i--) {
        printf("%d\n",i);
    }
    return 0;

}
