#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL;


void insertAtNthPosition(int nodeData, int position) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = nodeData;

    struct node *temp = head;
    int i;


    if (position == 1) {
        ptr->next = temp;
        head = ptr;
        return;
    }

   
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

 
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(ptr);
        return;
    }

    
    ptr->next = temp->next;
    temp->next = ptr;
}


void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    printf("Linked list elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, value, pos;

    printf("Enter the number of initial nodes: ");
    scanf("%d", &n);

  
    for (int i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        insertAtNthPosition(value, i); 
    }

    printf("\nEnter new value to insert and its position: ");
    scanf("%d %d", &value, &pos);

    insertAtNthPosition(value, pos);

    display();

    return 0;
}
