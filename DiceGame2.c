#include<stdio.h>
#include<stdlib.h>

int main(){
  int d1,d2,name;
  d1 = rand() % 6 + 1;
  d2 = rand() % 6 + 1;
  printf("What is your name?\n"); 
  scanf("> %d",&name);
  printf("Hello,%d!\n",name);
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",d1);
  printf("Die 2: %d\n",d2); 
  printf("Total value: %d\n", d1 + d2);
}
