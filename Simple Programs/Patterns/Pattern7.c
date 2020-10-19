// 7. Following star pattern
// *****
//  ***
//   *

#include<stdio.h>

int main(){
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  int i, j, k, l;

  for (i = 0; i < n; i++){
    for (k = 0; k < i; k++){
      printf(" ");
    }
    for (j = i; j < n; j++){
      printf("*");
    }
    for (l = i; l < (n - 1); l++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
