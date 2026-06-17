#include<stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);

    if(ch=='c' || ch=='C') {
        for(char i='A';i<='Z';i++) {
            printf("%c ",i);
        }
    }
    else if(ch=='s' || ch=='S') {
        for(char i='a';i<='z';i++) {
            printf("%c ",i);
        }
    }
    else {
        printf("Tumi bolechho vul, chhiro mathar chul");
    }
    printf("\n");
    return 0;
}
