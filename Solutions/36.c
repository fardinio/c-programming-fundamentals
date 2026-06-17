#include<stdio.h>
int main() {
    double unt;
    scanf("%lf",&unt);

    if(unt<200.0) {
        printf("%.1lf\n", unt*1.2);
    }
    else if(200.0<=unt && unt<400.0) {
        printf("%.1lf\n", unt*1.5);
    }
    else if("400<=unt && unt<600") {
        printf("%.1lf\n", unt*1.8);
    }
    else {
        printf("%.1lf\n", unt*2);
    }
    return 0;

}
