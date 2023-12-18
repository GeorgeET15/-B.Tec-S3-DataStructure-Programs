# include <stdio.h>

void getArray(int n, int a[])
{
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) {
        largest = left;
    }

    if (right < n && a[right] > a[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void heapSort(int n, int a[]) {
    int i;
    for (i = n / 2 - 1; i >= 0; i--) {
        heapify (a, n, i);
    }
    for (i = n - 1; i > 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify (a, i, 0);
    }
}

int main ()
{
    int limit, i, ch = -1;
   
    printf ("Enter the limit: ");
    scanf ("%d", &limit);
    int array[limit];
    getArray (limit, array);
   
    printf ("MENU:\n1. Heap Sort  2. Display  3. Exit\n");
   
    while (1)
    {
        printf ("\nEnter your choice: ");
        scanf ("%d", &ch);
       
        switch (ch)
        {
            case 1: heapSort (limit, array);
                    printf ("Heap Sorting Complete!\n");
                    break;
            case 2: printf ("SORTED ARRAY HEAP SORT:\n");
                    for (i=0; i<limit; i++)
                    { printf ("%d\t", array[i]); }
                    printf ("\n\n");
                    break;
            case 3: printf ("TERMINATED\n");
                    return 0;
            default: printf ("Invalid choice, choose again\n\n");
        }
    }
    return 0;
}
