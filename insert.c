#include<stdio.h>
int insert(int arr[],int n, int x, int cap,int pos ){

if(n==cap){
    return n;
}
int idx=pos-1;
for(int i=n-1;i>=idx;i--){
    arr[i+1]=arr[i];
}

    arr[idx]=x;

    return (n+1);

}

int main(){
    int arr[100];
    int n,x,pos,cap;
    cap=100;
     
    printf("enter the numbers of element to be inserted in the array");
    scanf("%d",&n);

    printf("enter the %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the element to be insterted");
    scanf("%d",&x);

    printf("enter the postion at which the element to be insterted");
    scanf("%d",&pos);

     n=insert(arr,n,x,cap,pos);

    printf("array after insertion is");
      for(int i=0;i<n;i++){
        printf("%d",arr[i]);

        printf("\n");
    }
    return 0;

}