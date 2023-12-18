#include <stdio.h>

int stack[100]; 
int top = -1;
int n, a;

void push(int item) {
    if (top == n - 1) {
        printf("Stack is Full. Cannot push.\n");
    } else {
        top++;
        stack[top] = item;
    }
    
}

void pop() {
    if (top == -1) {
        printf("Stack is Empty. Cannot pop.\n");
    } else {
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is Empty.\n");
    } else {
        printf("Top of the stack: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is Empty.\n");
    } else {
        printf("Stack Elements\n");
        printf("---------------\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, item;

    printf("STACK \n");
    printf("----- \n");
    printf("Enter MAX_SIZE: ");
    scanf("%d", &n);

    while (1) {
        printf("\nChoose an Option\n");
        printf("------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the no of elements to enter: ");
                scanf("%d", &a);
                for(int i = 0; i <= a; i++) {
                	printf("Enter the element to push: ");
                	scanf("%d", &item);
                	push(item);
                }
                printf("Pushed the elements into the stack.\n");
                break;
            case 2:
                pop();
                printf("Elements popped from stack.\n");
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting......\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
