// 3. Following star pattern
// ****
// ***
// **
// *

#include<stdio.h>

int main(){
  int n;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  int i, j;
  
  for (i = 0; i < n; i++){
    for (j = i; j < n; j++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
