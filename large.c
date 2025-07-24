#include<stdio.h>
int large(int a,int b, int c){
if(a>b && a>c){
    return a;
}
else if(b>a && b>c){
    return b;
}
else{
    return c;
}

}
int main(){
    int x,y,z;
    printf("enter the value of a,,b,c");
    scanf("%d%d%d",&x,&y,&z);
    printf("the larger among the given three number is %d",large(x,y,z));
    return 0;
}