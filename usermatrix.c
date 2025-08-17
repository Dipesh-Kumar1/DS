#include<stdio.h>
int main(){
    int M,N;
    printf("enter the value of M and N");
    scanf("%d%d",&M,&N);
    int mat[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&mat[i][j]);
           
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
           
            printf("%d",mat[i][j]);
        }
    }
    return 0;

}