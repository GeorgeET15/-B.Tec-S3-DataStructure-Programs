# include <stdio.h>

int Q [100];
int front =-1, rear =-1;
int n, item, a;

void enqueue (int item)
{
    if (rear==n-1)
    { printf("Queue is full\n"); }
    else
    { rear = rear+1;
      Q[rear] = item; 
      printf("Enqueued %d onto the queue.\n", item); }
}

void dequeue ()
{
    if (front == rear)
    { printf("Queue is empty\n"); }
    else
    { front = front+1;
      item = Q[front];
      printf("Dequeued %d from the queue.\n", item); }
}

void display() {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements\n");
        for (int i = front+1; i <= rear; i++) {
            printf("%d\n", Q[i]);
        }
    }
}

void main () {
    int choice;
    printf("QUEUE \n");
    printf("----- \n");
    printf("Enter MAX_SIZE: ");
    scanf ("%d",&n);
    


    
    while (1) {
        printf("\nChoose an Option\n");
        printf("------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
  	printf("Enter an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            {
		printf("Enter the no of elements to enter: ");
                scanf("%d", &a);
                for(int i=0; i<a; i++) {
			printf("Enter the element to enqueue: ");
                	scanf ("%d",&item);
                	enqueue (item);
		}
                break;
            }
            
            case 2:
            {
                dequeue ();
                break;
            } 
            
            case 3:
            {
                display ();
                break;
            }
            
            case 4:
            {
                printf ("Exiting......\n");
                return 0;
            }
            
            default:
            {
                printf ("Invalid choice!\n");
            }
        }
    } 
}
