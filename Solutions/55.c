#include<stdio.h>
int main()
{
    int n,is_prime=0;
    scanf("%d",&n);
    if(n<2)
    {
        is_prime=1;
    }
    else
    {
        for(int i=2; i<=n-1; i++)
        {
            if(n%i==0)
            {
                is_prime=1;
                break;
            }

        }
    }
    if(is_prime)
    {
        printf("Not Prime\n");
    }
    else
    {
        printf("Prime\n");
    }
    return 0;
}
