#include <stdio.h>
#include <stdlib.h>

// A linked list (LL) node to store a queue entry
struct QNode {
    int key;
    struct QNode* next;
};

// The queue, front stores the front node of LL and rear stores the last node of LL
struct Queue {
    struct QNode *front, *rear;
};

// A utility function to create a new linked list node
struct QNode* newNode(int k) {
    struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

// A utility function to create an empty queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// The function to add a key k to q
void enQueue(struct Queue* q, int k) {
    struct QNode* temp = newNode(k);

    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
}

// Function to remove a key from given queue q
void deQueue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }

    struct QNode* temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    printf("Dequeued: %d\n", temp->key);
    free(temp);
}

// Function to display the queue
void display(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct QNode* temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->key);
        temp = temp->next;
    }
    printf("\n");
}

// Driver code
/*int main() {
 struct Queue* q = createQueue(); 
enQueue(q, 10); 
enQueue(q, 20);
 deQueue(q); 
 deQueue(q);
  enQueue(q, 30);
  enQueue(q, 40); enQueue(q, 50); 
  deQueue(q);
 printf("Queue Front : %d \n", q->front->key);
 printf("Queue Rear : %d", q->rear->key); 
return 0; }*/
int main() {
    struct Queue* q = createQueue();
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enQueue(q, value);
            break;
        case 2:
            deQueue(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
