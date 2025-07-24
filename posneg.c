#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0){
        printf("the number is postive");

    }
    else if(a<0){
        printf("the number is odd");

    }
    else{
        printf("the number is 0");
    }
   return 0;
}
