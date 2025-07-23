#include<stdio.h>
#include <stdbool.h>
int main(){
    int x,result;
printf("enter the number x" );
scanf("%d",&x);
 result=x>5 && x++;
printf("%d",result);
printf("%d",x);
 result=x++ && x>5 ;
printf("%d",result);
printf("%d",x);
 result=!result;
printf("%d",result);
printf("%d",x);
return 0;



}