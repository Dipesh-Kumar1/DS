#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // maximum size of the queue

struct Queue {
    int items[SIZE];
    int front, rear;
};

// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

// Function to check if queue is full
int isFull(struct Queue* q) {
    if (q->rear == SIZE - 1)
        return 1;
    return 0;
}

// Function to check if queue is empty
int isEmpty(struct Queue* q) {
    if (q->front == -1 || q->front > q->rear)
        return 1;
    return 0;
}

// Function to add an element to the queue
void enQueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue.\n");
        return;
    }

    if (q->front == -1)  // if queue is empty
        q->front = 0;

    q->rear++;
    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

// Function to remove an element from the queue
void deQueue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }

    printf("Dequeued: %d\n", q->items[q->front]);
    q->front++;

    // Reset the queue if it becomes empty
    if (q->front > q->rear)
        q->front = q->rear = -1;
}

// Function to display the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    struct Queue* q = createQueue();
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu (Array Implementation) ---\n");
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

