#include<stdio.h>
int searcharray(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        return i;}
    }
    return -1;
}
int main(){
    int n,x;
    printf("enter the number of element");
        scanf("%d",&n);

        int arr[n];
        printf("enter the %d elements",n);
        for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        printf("enter the element to be search");
        scanf("%d",&x);

        int result=searcharray(arr,n,x);
        if(result==-1){
            printf("the elment is not found");
        }
        else{
            printf("the elemnt is found at index %d",result);
        }
}
