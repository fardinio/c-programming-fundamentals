#include<stdio.h>
int main() {
    int n,a=0,b=1,fib;
    scanf("%d",&n);

        for(int i=1;i<=n;i++) {
            fib=a+b;
            a=b;
            b=fib;
        }
        printf("%d\n",fib);

    return 0;
}
