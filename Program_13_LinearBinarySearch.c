#include <stdio.h>

int main() {
	int n;
    int BinarySearch() {
    	int a[20], flag = 0, i, n, item, l = 0, u, mid;

		printf("Enter the number of elements in the array: ");
		scanf("%d", &n);
		printf("Enter the elements: ");
		for (i = 0; i < n; i++) 
		{ scanf("%d", &a[i]); }

		printf("Enter the element to be searched: ");
		scanf("%d", &item);

		u = n - 1; 

		while (l <= u) 
			{
				mid = (l + u) / 2;
				if (item > a[mid]) 
				{ l = mid + 1; } 
				else if (item < a[mid]) 
				{ u = mid - 1; } 
				else if (item == a[mid]) 
				{   flag = 1;
				    printf("Element %d found at index %d\n", item, mid);
				    break;  }
			}

		if (flag == 0) 
			{ printf("Element not found\n"); }

			return 0;
	}
	
	void LinearSearch() {


		int a[10],i,n,sk,flag=1,*p;
		p = a; 
		
		printf ("Number of elements <10: ");
		scanf ("%d",&n);
		
		printf ("Enter elements: ");
		for (i=0;i<n;i++) {
		    scanf ("%d",(p+i));
		}
		
		for (i=0;i<n;i++) {
		    printf ("%d\t",*(p+i));
		}
		
		printf ("\nEnter the element to be searched: ");
		scanf ("%d", &sk);
		
		for (i=0;i<n;i++) {
		    if (a[i]==sk)
		    {
		        printf ("Element %d found at %d.", sk, i+1);
		        flag = 0;
		    }
		}
		
		if (flag == 1)
		{
		    printf("Element not found.\n");
		}
	}
	
	while(1) {
	
		printf("Search Menue\n");
		printf("------------\n\n");
		printf("1) Linear Search\n");
		printf("2) Binary Search\n");
		printf("3) Exit\n\n");
		printf("Enter your choice:- ");
		scanf("%d", &n);
	
		switch(n) {
	
			case 1: 
					LinearSearch();
					break;
			case 2:
					BinarySearch();
					break;
			case 3:
			  		printf("Exiting...");
			  		return 0;
			  		
			default:
					printf("Invalid Input\n");
		}
	}
	 
}
