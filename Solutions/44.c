#include<stdio.h>
int main() {
    int A,B,sqr,cub;
    scanf("%d %d", &A,&B);

    for(int i=A; i<=B; i++) {

        sqr=i*i;
        printf("%d\n",sqr);

        cub=i*i*i;
        printf("%d\n",cub);
    }
    return 0;
}

