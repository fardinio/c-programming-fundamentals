#include<stdio.h>
int main() {
    char x;
    scanf("%c",&x);

    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='o') {
        printf("vowel\n");
    }
    else {
        printf("constant\n");
    }
    return 0;
}
