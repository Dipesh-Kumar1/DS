#include<stdio.h>

int insertatend(int arr[],int n,int val,int capacity){
    if(n==capacity){
        printf("the array is full");
        return n;

    }

    arr[n]=val;
    return (n+1);
}
int main(){
    int capacity=100;
    int arr[100];
    int n,val;

    printf("enter the number of element to be inserted in array");
   scanf("%d",&n);

   printf("enter the %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

        printf("enter the value to be inserted");
        scanf("%d",&val);

        n= insertatend(arr, n,val,capacity);

        printf("array after insertion is");
         for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
         }

        return 0;
    

    
}