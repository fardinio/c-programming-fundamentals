#include<stdio.h>
#include<string.h>
int main(){
    char saved[100];
    char input[100];
    fgets(saved,sizeof(saved),stdin);
    fgets(input,sizeof(input),stdin);
    saved[strcspn(saved,"\n")]=0;
    input[strcspn(input,"\n")]=0;

    int x=strcmp(saved,input);
    if(x==0){
        printf("login successful\n");
    }
    else{
        printf("Password wrong\n");
    }
    return 0;
}
