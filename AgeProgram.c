#include <stdio.h>
int main(){
  printf("Welcome to Age Calculator!\nPlease enter your year of birth and today's year to calculate your age.\n");
  int YearOfBirth,YearOfToday;  
  printf("Enter your year of birth: %d\n",YearOfBirth);
  scanf("%d",&YearOfBirth);
  printf("Enter today's year: %d\n",YearOfToday);
  scanf("%d",&YearOfToday);
  printf("Your age is: %d\n",YearOfToday-YearOfBirth);
}