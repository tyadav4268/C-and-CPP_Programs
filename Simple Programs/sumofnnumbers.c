#include<stdio.h>

int main(){
  int total_numbers, num, sum = 0, i;

  printf("Total Numbers: ");
  scanf("%d", &total_numbers);

  printf("Enter numbers: \n");
  for(i = 0; i < total_numbers; i++){
     scanf("%d", &num);
     sum += num;
  }

  printf("Sum of all %d numbers is %d\n", total_numbers, sum);

  return 0;
}
