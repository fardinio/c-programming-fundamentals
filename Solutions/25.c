#include<stdio.h>
int main() {
    int head, din, vc;
    scanf("%d %d %d", &head, &din, &vc);

    if(head>din && head>vc) {
        printf("head sir\n");
    }
    else if(din>head && din>vc) {
        printf("din sir\n");
    }
    else {
        printf("vc sir\n");
    }
    return 0;
}
