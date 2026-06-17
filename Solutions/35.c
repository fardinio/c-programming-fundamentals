#include<stdio.h>
int main() {
    double num;
    scanf("%lf", &num);

    if(num>=80.0 && num<=100) {
        printf("A+\n");
    }
    else if(num>=75.0 && num<80.0) {
        printf("A\n");
    }
    else if(num>=70.0 && num<75.0) {
        printf("A-\n");
    }
    else if(num>=65.0 && num<70.0) {
        printf("B+\n");
    }
    else if(num>=60.0 && num<65.0) {
        printf("B\n");
    }
    else if(num>=55.0 && num<60.0) {
        printf("B-\n");
    }
    else if(num>=50.0 && num<55.0) {
        printf("C+\n");
    }
    else if(num>=45.0 && num<50.0) {
        printf("C\n");
    }
    else if(num>=40.0 && num<45.0) {
        printf("D\n");
    }
    else if(num<40.0) {
        printf("Fail\n");
    }
    return 0;
}

