#include <stdio.h>
#include <stdlib.h>

struct node {

	int data;
	struct node *next;
	
};
int item;

struct node *p, *head, *tail, *pointer, *previous;

void insertAtEnd() {

	p = (struct node *) malloc (sizeof(struct node));
	printf("Enter the element to  be added");
	scanf("%d", &p -> data);
	p -> next = NULL;
	
	if(head == NULL) {
	
		head = p;
		tail = p;
	}
	else {
	
		tail -> next = p;
		tail = p;
	}
}

void insertAtBeginning() {

	p = (struct node *) malloc (sizeof(struct node));
	printf("Enter the element to  be added");
	scanf("%d", &p -> data);
	p -> next = NULL;
	
	if(head == NULL) {
	
		head = p;
		tail = p;
	}
	else {
	
		p -> next = head;
		head = p;
	}
}

void insertAfterNode() {

	p = (struct node *) malloc (sizeof(struct node));
	printf("Enter the element to  be added");
	scanf("%d", &p -> data);
	
	p -> next = NULL;
	pointer = head;
	
	printf("Enter the NODE");
	scanf("%d", &item);
	
	while(pointer -> data != NULL) {
	
		pointer = pointer -> next;
	}
	p -> next = pointer -> next;
	pointer -> next = p;
}

void deleteBeginning() {

	if(head == NULL) {
	
		printf("list is empty");
	}
	else {
	
		pointer = head;
		head = pointer -> next;
		free(pointer);
	}
}


void deleteEnd() {

	if(head == NULL) {
		printf("List is empty");
	}
	else {
	
		pointer = head;
		while(pointer -> next != NULL) {
		
			previous = pointer;
			pointer = previous -> next;
		}
		
		previous -> next = NULL;
		tail = previous;
		free(pointer);
	}
}

void deleteAfterNode() {

	printf("Enter the NODE");
	scanf("%d", &item);
	pointer = head;
	previous =head;
	while(pointer -> next != item) {
	
		previous = pointer;
		pointer = pointer -> next;
		
	}
	
	previous -> next = pointer -> next;
	free(pointer);
}


void display() {


	if(head == NULL) {
	
		printf("Link is empty");
	}
	
	else{
	
		pointer = head;
		while( pointer -> next != NULL) {
			printf("%d\t", pointer -> data);
			pointer = pointer -> next;
		}
	}
}


void main() {


	int n;
	printf("Options\n");
	printf("-------\n");
	printf("\n");
	printf("1) Insert At End\n");
	printf("2) Insert At Beginning\n");
	printf("3) Insert After Node\n");
	printf("4) Delete Beginning\n");
	printf("5) Delete End\n");
	printf("6) Display\n");
	printf("7) EXIT\n\n");
	
	while(1) {
	
		printf("Choose an option :- ");
		scanf("%d", &n);
		
		
		switch(n) {
		
			case 1: 
					insertAtEnd();
					break;
			case 2: 
					insertAtBeginning();
					break;
			case 3: 
					insertAfterNode();
					break;
			case 4: 
					deleteBeginning();
					break;
			case 5: 
					deleteEnd();
					break;
			case 6: 
					display();
					break;
			case 7: 
					exit(0);
			default: 
					printf("Invalid Option");
		}
	}
	
	
	
}
