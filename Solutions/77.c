#include<stdio.h>
int main(){
    int n,c,i,j,sum,max,maxst;
    scanf("%d %d",&n,&c);
    int marks[100][10];
    for(i=0;i<n;i++){
        for(j=0;j<c;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    max=-1,maxst=-1;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum+=marks[i][j];
        }
        if(sum>max){
            max=sum;
            maxst=i;
        }
        printf("%d\n",sum);
    }
    printf("\n%d\n",maxst);
    return 0;
}
