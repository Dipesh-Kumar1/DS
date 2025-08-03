#include<stdio.h>
int main(){
    int n;
  
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("the elements are");
    for(int i = 0; i < n; i++) {
    printf("%d\n",arr[i]);
    }
    return 0;
}