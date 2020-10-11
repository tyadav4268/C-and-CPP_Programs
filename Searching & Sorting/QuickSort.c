//Time complexity worst case: O(n^2)
//Best case: O(nlogn)

#include<stdio.h>

int qf = 0, pf = 0;
int * quicksort(int *, int, int);
int partition(int *, int, int);
void swap(int *, int*);

int size;

int main()
{
  printf("QuickSort Program\n");
  printf("Enter size of array: \n");
  scanf("%d", &size);
  int arr[size];
  int i;

  printf("Enter the elements: \n");
  for (i = 0; i < size; i++)
  {
    printf("[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  int *ptr;
  int lb, ub;
  lb = 0;
  ub = size - 1;

  ptr = quicksort(arr, lb, ub);

  printf("Sorted Array: \n");
  for (i = 0; i < size; i++)
  {
    printf("[%d]: %d\n", i, ptr[i]);
  }

}

int * quicksort(int * ar, int lb, int ub)
{
  qf++;
  int loc;
  printf("\nIn quicksort function, frequency: %d\n",qf);
  printf("Lower Bound: %d\n", lb);
  printf("Upper Bound: %d\n", ub);
  if(lb < ub)
  {
    printf("As lower bound is smaller than upper bound, calling partion function:\n");
    loc = partition(ar, lb, ub);
    printf("Back to QuickSort Function after coming from Partion function.\n");
    int elem;
    printf("Array elements after %d pass:\n", pf);
    for (elem = 0; elem < size; elem++)
    {
      printf("[%d]: %d\n", elem, ar[elem]);
    }
    printf("Pivot element: %d\n", ar[loc]);

    if (lb < loc - 1)
    {
      printf("Calling quicksort on LHS of pivot element: %d\n", ar[loc]);
      quicksort(ar, lb, loc - 1);
    }
    else
    {
            printf("As there is nothing to sort at LHS of pivot element %d, we don't call quicksort on LHS.\n", ar[loc]);
    }

    if (ub > loc + 1)
    {
      printf("Calling quicksort on RHS of pivot element %d \n", ar[loc]);
      quicksort(ar, loc + 1, ub);
    }
    else
    {
            printf("As there is nothing to sort at RHS of pivot element %d, we don't call quicksort on RHS.\n", ar[loc]);
    }

  }

  return ar;

}

int partition(int * ar, int lb, int ub)
{
  pf++;
  printf("\nIn Partion function, frequency: %d\n",pf);
  int pivot = ar[lb];
  int start = lb;
  int end = ub;
  printf("Partioning taking Pivot element as %d\n", pivot);
  printf("Start to be: %d\n", lb);
  printf("End to be: %d\n", ub);

  while(start < end)
  {
    while(ar[start] <= pivot)
    {
      printf("As %d <= %d, incrementing start.\n", ar[start], pivot);
      start++;
      printf("Start: %d\n", start);
    }
    printf("\n");
    while(ar[end] > pivot)
    {
      printf("As %d > %d, decrementing end.\n", ar[end], pivot);
      end--;
      printf("End : %d\n", end);
    }
    printf("\n");
    if(start < end)
    {
      printf("Start: %d\n", start);
      printf("End : %d\n", end);
      printf("Swapping %d and %d\n", ar[start], ar[end]);
      swap(&ar[start], &ar[end]);
      int elems;
      printf("Array after swapping: \n");
      for (elems = 0; elems < size; elems++)
      {
        printf("[%d]: %d\n", elems, ar[elems]);
      }
    }
  }
  printf("As start i.e. %d and end i.e. %d has crossed each other, swapping %d and %d\n", start, end, ar[lb], ar[end]);
  swap(&ar[lb], &ar[end]);
  int elems;
  printf("Array after swapping: \n");
  for (elems = 0; elems < size; elems++)
  {
    printf("[%d]: %d\n", elems, ar[elems]);
  }
  return end;
}

void swap(int *ptr1, int *ptr2)
{
  int temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
