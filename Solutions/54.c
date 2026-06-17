#include<stdio.h>
int main() {
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    for(int i=A; i<=B; i++) {
        if(i%C==0) {
            continue;
        }
        else if(i%D==0) {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}
