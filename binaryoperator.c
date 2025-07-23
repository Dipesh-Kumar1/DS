#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    printf("enter thee number x");
    scanf("%f",&x);
    printf("enter thee number y");
    scanf("%f",&y);
    printf("the add is%f",x+y);

    printf("the divide is %f",x/y);
printf("The remainder is: %f\n", fmod(x, y));
return 0;


}