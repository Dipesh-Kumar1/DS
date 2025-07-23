#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of ");
     scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    printf("the number a after swap a is %d and b is %d",a,b);
    return 0;


}