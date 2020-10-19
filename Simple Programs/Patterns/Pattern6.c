// 6. Following star pattern
//    *
//   ***
//  *****

#include<stdio.h>

int main(){
  int n;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  int i, j, k, l;

  for (i = 0; i < n; i++){
    for (j = i; j < (n - 1); j++){
      printf(" ");
    }
    for (k = 0; k <= i; k++){
      printf("*");
    }
    for (l = 1; l <= i; l++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
