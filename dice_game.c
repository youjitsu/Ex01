#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
  return (rand() % 6) + 1;
}

int main() {
  int dice1,dice2;
  char name[100];
  printf("What is your name?\n");
  scanf("%s", name);
	printf("Hello, %s!\n", name);
  srand(time(0));  // Initialize random number generator                                                                
  dice1=rollDice();
  dice2=rollDice();
  
  printf("Rolling dice...\n");
  printf("Die 1: %d\n", dice1);
  printf("Die 2: %d\n", dice2);
  printf("Total value: %d\n", dice1+dice2);

  return 0;

}
