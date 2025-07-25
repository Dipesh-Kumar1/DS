#include<stdio.h>
int main(){
    int a;
    printf("enter the table you want");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        int result=a*i;
        printf(" %d",result);
    }
    return 0;

}