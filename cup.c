#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2==0){
        printf("the opponent win the cup");
    }
    else{
        printf("the player win the cup");
    }
    return 0;


}