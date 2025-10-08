#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL; 

void insertAtBeginning(int value) {
   
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL) {
        head->prev = newnode;
    }


    head = newnode;
}


void display() {
    struct node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10);

    display(); 

    return 0;
}
