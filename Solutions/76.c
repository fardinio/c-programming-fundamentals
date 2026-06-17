#include<stdio.h>
int main(){
    int n,c,i,j,k,max,min,maxcourse,mincourse;
    scanf("%d %d",&n,&c);
    int marks[100][10];
    for(i=0;i<n;i++){
        for(j=0;j<c;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<n;i++){
        max=marks[0][0],maxcourse=0;
        for(j=0;j<c;j++){
            if(max<marks[i][j]){
                max=marks[i][j];
                maxcourse=j;
            }
        }
        min=marks[0][0],mincourse=0;
        for(k=0;k<c;k++){
            if(min>marks[i][k]){
                min=marks[i][k];
                 mincourse=k;
            }
        }
        printf("Student %d scored best at course %d (%d) and worst at course %d (%d).\n",i,maxcourse,max,mincourse,min);
    }
    return 0;
}
