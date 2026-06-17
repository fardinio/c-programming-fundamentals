#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a==b || b==c || c==a){
        printf("match hobe\n");
    }
    else {
        printf("match hobe na\n");
    }
    return 0;
}
