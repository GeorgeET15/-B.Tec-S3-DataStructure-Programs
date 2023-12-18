#include<stdio.h>

void enqueue(int queue[10],int* front , int *rear , int size);

void dequeue(int queue[10],int* front , int *rear , int size);

void display(int queue[10],int* front , int *rear , int size);






void display(int queue[10],int* front , int *rear , int size)
{
	if ((*front)==(*rear))
	{
		printf("\e[1;1H\e[2J");
		printf("EMPTY QUEUE");
		printf("\nEnter a number to go back : ");
		scanf("%d",&size);
	}
	else
	{
		int i;
		printf("\e[1;1H\e[2J");
		if((*front)==0)
		{
			(*front)++;
			i = (*front);
		}
		else
		{
			i = (*front);
		}
		
		for(i;i!=((*rear)+1);i++)
		{
			printf("|%d|",queue[i]);
		}
		printf("\nEnter a number to go back : ");
		scanf("%d",&size);		
	}
}





void dequeue(int queue[10],int* front , int *rear , int size)
{
	printf("\e[1;1H\e[2J");
	if ((*front) == (*rear))
	{
		printf("EMPTY QUEUE");
		printf("\nEnter a number to go back");
		scanf("%d",&size);
	}
	else
	{
		(*front) = (((*front) +1)%size);
		printf("\nEnter a number to go back");
		scanf("%d",&size);
	}	
}



void enqueue(int queue[10],int* front , int *rear , int size)
{
	printf("\e[1;1H\e[2J");
	
	if ((((*rear)+1)%size) == (*front))
	{
		printf("THE QUEUE IS FULL");
		scanf("%d",&size);
	}
	else
	{
		printf("Enter the element to enqueued : ");
		(*rear)++;
		scanf("%d",&queue[(*rear)]);
		printf("%d inserted into index %d",queue[(*rear)] , (*rear));
		printf("\nEnter a number to go back");
		scanf("%d",&size);
	}
}









void main()
{
	int queue[10];
	int front , rear, size;
	front = rear = 0;
	printf("Welcome to circular queue");
	printf("\nEnter the size of the queue : ");
	scanf("%d",&size);
	printf("\e[1;1H\e[2J");
	int ch = 1;
	int trash;
	while (ch != 0)
	{
		printf("\e[1;1H\e[2J");
		printf("CIRCULAR QUEUE\n");
		printf("   1.Enqueue\n   2.Dequeue\n   3.Display\n\n   0.Exit");
		printf("\nEnter your option : ");
		scanf("%d",&ch);
		if (ch ==1)
		{
			enqueue(queue,&front,&rear,size);
		}
		if (ch ==2)
		{
			dequeue(queue,&front,&rear,size);
		}
		if (ch ==3)
		{
			display(queue,&front,&rear,size);
		}
		
	
	}
}
