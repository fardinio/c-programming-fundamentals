#include<stdio.h>
int main() {
    int i;
    for(i=7;i<=28;i+=3) {
        printf("%d ",i);
    }
    printf("\n\n");

    for(i=41;i>=11;i-=6) {
        printf("%d ",i);
    }
    printf("\n\n");

    for(i=4;i<=256;i*=2) {
        printf("%d ",i);
    }
    printf("\n\n");
    return 0;
}
