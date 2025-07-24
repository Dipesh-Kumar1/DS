#include<stdio.h>
int add(int x,int y){
    int c=x+y;
    return c;
}
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("the addition is %d",add(a,b));
    return 0;
}