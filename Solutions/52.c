#include<stdio.h>
int main() {
    int n;
    long long int fac=1;
    scanf("%d",&n);
    if(n==0) {
        return 0;
    }
    for(int i=1;i<=n;i++) {
        fac*=i;
    }
    printf("%lld\n",fac);
    return 0;
}
