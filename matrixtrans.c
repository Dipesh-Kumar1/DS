#include<stdio.h>
int main(){
    int mat[3][2]={{2,3},{3,7},{7,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mat[i][j]);
            printf("\n");
        }
    }
    return 0;
}