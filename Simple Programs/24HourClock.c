#include<stdio.h>

int main(){
  int hour;
  int increase;
  printf("Enter Current Hour: ");
  scanf("%d", &hour);
  printf("Enter Increment: ");
  scanf("%d", &increase);
  int newHour;
  newHour = (hour + increase) % 24;     //the use of modulo operator to limit the output
  int ones = newHour % 10;
  int tens = newHour / 10;
  printf("New Time: %d%d:00", tens, ones);
  return 0;
}
