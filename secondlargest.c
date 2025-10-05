#include<stdio.h>
int secondlargest(int arr[],int n){
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1|| arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}

int main(){
    int arr[100];
    int n;    
    printf("enter the numbers of element to be inserted in the array");
    scanf("%d",&n);

    printf("enter the %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=secondlargest(arr,n);
    if(result==-1){
        printf("no second eleemnt is found")
        ;
    }
    else{
        printf("the secomd element is %d",arr[result]);
    }
    return 0;
}