#include<stdio.h>
int main(){
    int n,c,i,j,max,maxst;
    scanf("%d %d",&n,&c);
    int marks[n][c];
    for(i=0;i<n;i++){
        for(j=0;j<c;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<c;j++){
        max=marks[0][j];
        for(i=0;i<n;i++){
            if(max<marks[i][j]){
                max=marks[i][j];
                maxst=i;
            }
        }
        printf("Student %d scored the highest %d marks in course %d.\n",maxst,max,j);
    }
    return 0;
}
