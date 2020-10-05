#include<stdio.h>
void selectionSort(int *, int);
void swap(int *, int *);

int main()
{
  int size, i;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter elements: \n");
  for (i = 0; i<size; i++)
  {
    printf("arr[%d]: ",i);
    scanf("%d", &arr[i]);
  }

  selectionSort(arr, size);

  printf("Sorted Array: \n");
  for (i = 0; i<size; i++)
  {
    printf("arr[%d]: %d \n",i, arr[i]);
  }

  return 0;
}

void selectionSort(int *ar, int size)
{
  int i, j, min, k;
  for(i = 0; i<size-1; i++)
  {
    min = i;
    printf("\nLet min = i = %d\n", min);
    for (j = i+1; j<size; j++)
    {
      printf("\nChecking ar[%d] < ar[%d]\n", j, min);
      if(ar[j] < ar[min])
      {
              printf("As ar[%d] < ar[%d] ", j, min);
              min = j;
              printf("therefore min = %d\n",min);
      }
      else printf("\nar[%d] !< ar[%d]\n", j, min);
    }

    if(min != i)
    {
        swap(&ar[i], &ar[min]);
        printf("\nSwapping ar[%d] and ar[%d]\n", i, min);
    }

    printf("Sorted Array after %d iteration: \n", i+1);
    for (k = 0; k<size; k++)
    {
      printf("ar[%d]: %d \n",k, ar[k]);
    }

    if(i != size -2)
      printf("\nGoing to repeat for i = %d\n", i+1);
  }
}

void swap(int *ae1, int * ae2)
{
  int temp;
  temp = *ae1;
  *ae1 = *ae2;
  *ae2 = temp;
}
