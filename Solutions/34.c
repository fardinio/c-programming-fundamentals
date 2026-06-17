#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);

    if(x<10) {
        printf("1 digit\n");
    }
    else if(x<100) {
        printf("2 digit\n");
    }
    else if("x<1000") {
        printf("3 digits\n");
    }
    else {
        printf("not exists\n");
    }
    return 0;
}
