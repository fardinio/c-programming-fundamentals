#include<stdio.h>
int main() {
    int bd, ug;
    scanf("%d %d", &bd, &ug);

    if(bd>ug) {
        printf("Bangladesh\n");
    }
    else {
        printf("Uganda\n");
    }
    return 0;
}
