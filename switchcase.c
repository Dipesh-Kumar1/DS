#include<stdio.h>
int main(){
    int a,b,c;
    char ca;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
    printf("enter the operation to perform");
    scanf(" %c",&ca);
    switch(ca){
        case '+':
        c=a+b;
        printf("the addition is %d",c);
                break;
        case '-':
        c=a-b;
        printf("the subtraction is %d",c);
                break;
        case '*':
        c=a*b;
        printf("the multiplication is %d",c);
                 break;
                default:printf("invalid");
    }
    
    return 0;
}


