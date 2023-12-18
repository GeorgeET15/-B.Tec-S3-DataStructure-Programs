#include <stdio.h>
#define MAX_SIZE 20

int deque[MAX_SIZE];
int front = -1, rear = -1;

void insertFront(int item) {
    if (front == 0 && rear == MAX_SIZE - 1) {
        printf("DEQUE IS FULL\n");
    } else {
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = MAX_SIZE - 1;
        } else {
            front--;
        }
        deque[front] = item;
        printf("INSERTED ELEMENT %d\n", item);
    }
}

void insertRear(int item) {
    if (front == 0 && rear == MAX_SIZE - 1) {
        printf("DeQUEUE IS FULL\n");
    } else {
        if (front == -1) {
            front = rear = 0;
        } else if (rear == MAX_SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }
        deque[rear] = item;
        printf("INSERTED ELEMENT %d\n", item);
    }
}

void deleteFront() {
    if (front == -1) {
        printf("DEQUEUE is Empty\n");
    } else {
        printf("ELEMENT DELETED\n", deque[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            if (front == MAX_SIZE - 1) {
                front = 0;
            } else {
                front++;
            }
        }
    }
}

void deleteRear() {
    if (front == -1) {
        printf("DEQUE IS EMPTY\n");
    } else {
        printf("ELEMENT DELETED\n", deque[rear]);
        if (front == rear) {
            front = rear = -1;
        } else {
            if (rear == 0) {
                rear = MAX_SIZE - 1;
            } else {
                rear--;
            }
        }
    }
}

void display() {
    if (front == -1) {
        printf("DEQUE IS EMPTY\n");
    } else {
        int i = front;
        printf("DEQUE ELEMENTS: ");
        if (front <= rear) {
            while (i <= rear) {
                printf("%d ", deque[i]);
                i++;
            }
        } else {
            while (i < MAX_SIZE) {
                printf("%d ", deque[i]);
                i++;
            }
            i = 0;
            while (i <= rear) {
                printf("%d ", deque[i]);
                i++;
            }
        }
        printf("\n");
    }
}

int main() {
    
    int choice, item;
	printf("DEQUEUE \n");
    	printf("------- \n");
    	
        printf("\nChoose an Option\n");
        printf("------------------\n");
        printf("1. Front Insert\n");
        printf("2. Rear Insert\n");
        printf("3. Front Delete\n");
        printf("4. Rear Delete\n");
        printf("5. Display\n");
        printf("6. Exit\n");

    while (1) {
        printf("Choose a Options: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &item);
                insertFront(item);
                break;
            case 2:
                printf("Enter element to enqueue: ");
                scanf("%d", &item);
                insertRear(item);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
