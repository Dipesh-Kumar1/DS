#include<stdio.h>
#include<string.h>

int main(){
    size_t a,b;
    char s1[]="dipesh";
    a=sizeof(s1);
    b=strlen(s1);
    printf("%zu %zu",a,b);
    return 0;
}