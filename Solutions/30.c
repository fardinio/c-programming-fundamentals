#include<stdio.h>
int main()
{
    int a, b, c, d, e, all, sum, last;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    scanf("%d", &all);

    sum = 0;

    if(a%2==0) {
        sum+=ceil(41.0/3.0);
    }
    else{ sum+=ceil(41.0/2.0);
    }

    if(b%2==0) {
        sum+=ceil(41.0/3.0);
    }
    else{ sum+=ceil(41.0/2.0);
    }

    if(c%2==0) {
        sum+=ceil(41.0/3.0);
    }
    else{ sum+=ceil(41.0/2.0);
    }

    if(d%2==0) {
        sum+=ceil(41.0/3.0);
    }
    else{ sum+=ceil(41.0/2.0);
    }

    if(e%2==0) {
        sum+=ceil(41.0/3.0);
    }
    else{ sum+=ceil(41.0/2.0);
    }

    last = all - sum;

    if(last<=0) {
    printf("Zero\n");
    }
    else {
    printf("%d",last);
    }

    return 0;
}
