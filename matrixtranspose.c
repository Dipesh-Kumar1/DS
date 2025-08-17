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
    int trans[N][M];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            trans[j][i] =mat[i][j];
        }
    }
    printf("the transpose matrix is");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
           printf("%d ",trans[i][j]);
           
        }
        printf("\n"); 
    }
    return 0;
}