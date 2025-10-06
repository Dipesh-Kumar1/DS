#include<Stdio.h>
int max(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
             max = arr[i];
           

}
        }
        return max;
    }
    
int main(){
    int n;

    printf("enter the number of element to be in array");
    scanf("%d",&n);
int arr[n];
    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int result=max(arr, n);
      printf("The maximum element in the array is: %d\n", result);
    return 0;
}