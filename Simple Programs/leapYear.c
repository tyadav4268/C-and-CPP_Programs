#include<stdio.h>

int isLeap(int year){
  if(year % 400 == 0){
    return 1;
  }
  else if(year % 100 == 0){
    return 0;
  }
  else if(year % 4 == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int year;
  printf("Enter Year:");
  scanf("%d", &year);
  if(isLeap(year)){
    printf("%d is a leap year.", year);
  }
  else{
    printf("%d is not a leap year.", year);
  }
  return 0;
}
