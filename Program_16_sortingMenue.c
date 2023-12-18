#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int a[]) {
  
  	printf("Bubble Sort\n");
	printf("-----------\n\n");
	
	int i, j, temp;  
	for(i = 0; i < 7; i++) {
		    
      	for(j = i+1; j < 7; j++) {
      	    
  			if(a[j] < a[i]) {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }
        for(int k = 0; k < 7; k++) {
        	
        	printf("%d", a[k]);
        }
        printf("\n");     
    }
    printf("\n");
    printf("Sorted Array:- ");
	for(int i = 0; i < 7; i++) {
		
		printf("%d", a[i]);
	}
	printf("\n\n");     
 } 
void insertionSort(int a[]) {

	printf("Insertion Sort\n");
	printf("--------------\n\n");

    int i, j, temp;  
    for (i = 1; i < 7; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;
        for(int k = 0; k < 7; k++) {
        	
        	printf("%d", a[k]);
        }
        printf("\n");
           
    }
    printf("\n");
	printf("Sorted Array:- ");
	for(int i = 0; i < 7; i++) {
		
		printf("%d", a[i]);
	}    
}
void selectionSort(int a[]) {

	printf("Selection Sort\n");
	printf("--------------\n\n");
	
	for(int i = 0; i < 7; i++) {
		
		int small = i;
		for(int j = 0; j < 7; j++) {
			if(a[j] > a[small]) {
				
				int temp = a[small]; 
				a[small] = a[j];
				a[j] = temp;
				
			}
			
			printf("%d", a[j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Sorted Array:- ");
	for(int i = 0; i < 7; i++) {
		
		printf("%d", a[i]);
	}
	printf("\n\n");
}

int main() {

	int a[] = {6, 4, 1, 8, 2, 7, 9};
	while(true) {
		printf("SORTER\n");
		printf("------\n\n");
		printf("Options\n");
		printf("-------\n\n");
		printf("1) Bubble Sort\n");
		printf("2) Insertion Sort\n");
		printf("3) Selection Sort\n");
		printf("4) Exit\n");
		int n;
		printf("Choose an option:- ");
		scanf("%d", &n);
		
		switch(n) {
		
			case 1:
					bubbleSort(a);
					break;
			case 2: 
					insertionSort(a);
					break;
			case 3:
					selectionSort(a);
					break;
			case 4:
					printf("Exiting....");
					return 0;
			default: 
					printf("Invalid response");
					break;
		}
		
	
	}	
}
