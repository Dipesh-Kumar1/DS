#include<stdio.h>
int main(){
    int d,n;
    printf("enter the number of today day");
    scanf("%d",&d);
    printf("enter the number of day berfore to find");
    scanf("%d",&n);
    int mod=n%7;
    int sub=d-mod;
    if(sub>=0){
        printf("the day is %d",sub);

    }
    else{
        printf("the day is %d",sub+7);
    }
    return 0;



}