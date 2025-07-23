#include<stdio.h>
int main(){
    int n,result;
     printf("enter the value of n");
     scanf("%d",&n);
     if(n<0){
        result=-(n%10);
     }
     else{
        result=n%10;
     }
    
     printf("the last digit of given number is %d",result);
     return 0;

}