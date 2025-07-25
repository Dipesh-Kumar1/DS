#include<stdio.h>
int main(){
    int a;
    float fact = 1;

    printf("enter a number");
    scanf("%d",&a);
    for(int i=a;i>=a;i--){
        fact *= i;
        printf("the factorial is %f"fact);
    }
    return 0;
}