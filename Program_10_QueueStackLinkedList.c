#include <stdio.h>
#include <stdlib.h>

struct nodeQ {
  int dataQ;
  struct nodeQ * nextQ;
};

struct nodeQ * pQ, * front, * rear, * ptr;
int item;

struct nodeS {
  int dataS;
  struct nodeS * nextS;
};

struct nodeS * pS, * top, * pointer;

void push() {
  pS = (struct nodeS * ) malloc(sizeof(struct nodeS));
  printf("Enter the dataS: ");
  scanf("%d", & pS -> dataS);
  if (top == NULL) {
    pS -> nextS = NULL;
    top = pS;
    printf("Element entered\n");
  } else {
    pS -> nextS = top;
    top = pS;
    printf("Element entered\n");
  }
}

void pop() {
  if (top == NULL) {
    printf("Stack is empty\n");
  } else {
    pointer = top;
    top = top -> nextS;
    free(pointer);
    printf("Element deleted\n");
  }
}

void displayS() {
  pointer = top;
  if (top == NULL) {
    printf("Stack is empty\n");
  } else {
    while (pointer != NULL) {
      printf("%d\t", pointer -> dataS);
      pointer = pointer -> nextS;
    }
  }
}

void enqueue() {
  pQ = (struct nodeQ * ) malloc(sizeof(struct nodeQ));
  printf("Enter the dataQ: ");
  scanf("%d", & pQ -> dataQ);
  if (front == NULL && rear == NULL) {
    front = pQ;
    rear = pQ;
    printf("Element entered\n");
  } else {
    rear -> nextQ = pQ;
    rear = pQ;
    printf("Element entered\n");
  }
}

void dequeue() {
  if (front == NULL) {
    printf("Queue is empty, cannot dequeue\n");
  } else if (front == rear) {
    front = NULL;
    rear = NULL;
    printf("Element deleted\n");
  } else {
    ptr = front;
    front = ptr -> nextQ;
    free(ptr);
    printf("Element deleted\n");
  }
}

void displayQ() {
  ptr = front;
  if (front == NULL) {
    printf("Queue is empty\n");
  } else {
    while (ptr != NULL) {
      printf("%d\t", ptr -> dataQ);
      ptr = ptr -> nextQ;
    }
    printf("\n");
  }
}

int main() {
    int choice = 0;
    front = NULL;
    rear = NULL;
    printf("Queue and Stack(LL)\n-------------------\n\n1. Queue\n2. Stack\n3. Exit\n");

    while (1) {
      printf("\nEnter your choice: ");
      scanf("%d", & choice);

      if (choice == 1) {
        int choiceQ = 0;
        front = NULL;
        rear = NULL;
        printf("MENU\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");

        while (1) {
          printf("\nEnter your choice: ");
          scanf("%d", & choiceQ);

          switch (choiceQ) {
          case 1:
            enqueue();
            break;
          case 2:
            dequeue();
            break;
          case 3:
            displayQ();
            break;
          case 4:
            printf("TERMINATED\n");
            return 0;
          default:
            printf("INVALID CHOICE, TRY AGAIN\n");
          }}}
         else if (choice == 2) {
          int choiceS = 0;
          top = NULL;
          printf("MENU\n1. Push\n2. Pop\n3. Display\n4. Exit\n");

          while (1) {
            printf("\nEnter your choice: ");
            scanf("%d", & choiceS);

            switch (choiceS) {
            case 1:
              push();
              break;
            case 2:
              pop();
              break;
            case 3:
              displayS();
              break;
            case 4:
              printf("TERMINATED\n");
              return 0;
            default:
              printf("INVALID CHOICE, TRY AGAIN\n");
            }
          }
          }
         else if (choice == 3) {
          printf("TERMINATED\n");
          return 0;
        } else {
          printf("INVALID CHOICE, TRY AGAIN\n");
        }
      }
      return 0;
    }

