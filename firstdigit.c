#include<stdio.h>
int firstdigit(int n){
    while(n>10){
        n=n/10;
    }
    return n;
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("the first digit of the number %d",firstdigit(n));
    return 0;
    
}