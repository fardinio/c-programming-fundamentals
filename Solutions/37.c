#include<stdio.h>
int main() {
    int ch, per, reg, sav, time ;
    scanf("%d",&ch);

    if(ch>=70) {
        per=ch-69;
        time=(per*5)+(50*8)+(18*15)+25;
    }
    else if(ch>=20 && ch<70) {
        reg=ch-19;
        time=(reg*8)+(18*15)+25;
    }
    else if(ch>=2 && ch<20) {
        sav=ch-1;
        time=(sav*15)+25;
    }
    else if(ch==1) {
        time=25;
    }
    printf("%d\n",time);
    return 0;
}
