#include<stdio.h>
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
int main(){
    int a,b,temp;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    swap(&a, &b);
    printf("the number after swap is %d%d",a,b);
    return 0;

}