#include<stdio.h>
int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    for(int i=A; i<=B;i++) {
        if(i%3==0 && i%5==0) {
            printf("%d Halum\n",i);
        }
        else if(i%3==0) {
            printf("%d Ha\n",i);
        }
        else if(i%5==0) {
            printf("%d Lum\n",i);
        }
    }
    return 0;
}
