#include<stdio.h>
int delete(int arr[],int n,int x){
    int i;
for( i=0;i<n;i++){
    if(arr[i]==x){
        break;
    }
    }
    if ( i == n)
        return n;

    for (int j =  i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    } 
    return (n - 1);
}



int main(){
    int arr[100];
    int n,x;

    printf("enter the n umber of elemnts to be in array");
    scanf("%d",&n);

    printf("enter the elements");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the elemts to be deleted");
    scanf("%d",&x);

    n=delete(arr,n,x);
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;


}