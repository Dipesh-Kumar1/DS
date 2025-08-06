#include<Stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int average=sum/n;
    printf("the average of the number is %d",average);


}