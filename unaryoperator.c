#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);
    printf("enter the value of z\n");
    scanf("%d",&z);
    x=y++;
    z=++x;
    printf("the new value of x,y,z are %d%d%d",x,y,z);
    return 0;
    

}