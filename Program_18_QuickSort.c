# include <stdio.h>

void getArray(int n, int a[])
{
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void quickSort(int a[], int left, int right) {
    if (left < right) {
        int pivot = a[right];
        int i = left - 1;

        for (int j = left; j <= right - 1; j++) {
            if (a[j] <= pivot) {
                i++;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[i + 1];
        a [i + 1] = a [right];
        a [right] = temp;
        quickSort (a, left, i);
        quickSort (a, i + 2, right);
    }
}

int main ()
{
    int limit, i, ch = -1;
   
    printf ("Enter the limit: ");
    scanf ("%d", &limit);
    int array[limit];
    getArray (limit, array);
   
    printf ("MENU:\n1. Quick Sort  2. Display  3. Exit\n");
   
    while (1)
    {
        printf ("\nEnter your choice: ");
        scanf ("%d", &ch);
       
        switch (ch)
        {
            case 1: quickSort (array, 0, limit-1);
                    printf ("Quick Sorting Complete!\n");
                    break;
            case 2: printf ("SORTED ARRAY QUICK SORT:\n");
                    for (i=0; i<limit; i++)
                    { printf ("%d\t", array[i]); }
                    printf ("\n");
                    break;
            case 3: printf ("TERMINATED\n");
                    return 0;
            default: printf ("Invalid choice, choose again\n\n");
        }
    }
    return 0;
}
