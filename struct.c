#include<stdio.h>
#include<string.h>

typedef struct student{
    int age;
    char name[100];
    int grade;
}stu;
int main(){
    stu a;
    a.age=25;
    strcpy(a.name,"dipesh");
    a.grade=10;
    printf("%d %s %d",a.age,a.name,a.grade);
    return 0;
}