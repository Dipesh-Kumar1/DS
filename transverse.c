#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};  

struct node* head=NULL;

void insertatEnd(int value){
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(head==NULL){
    head=newnode;
    return ;
        }


temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
    temp->next=newnode;


}

void   transverse(){
    struct  node *temp;

    if(head==NULL){
        printf("the linked list id empty");
        return ;
    }
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    int n,value;

    printf("enter the number of nodes");
    scanf("%d",&n);

    printf("enter the %d nodes",n);
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        insertatEnd(value);
    }
    transverse();
    return 0;
}