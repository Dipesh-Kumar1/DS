#include<stdio.h>
int main(){
    int n,x,i;
    printf("enter the number upto which u wnat the table");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        for(int x=1;x<=10;x++){
            printf("%d\n",x*i);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}