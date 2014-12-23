#include <stdio.h>
#include "myHeader.h"

int main()
{
  printf("Hi! Back from your morning run?");
  printf(" Time to...build, write, read, play guitar!!");
    
   printf("What do you want to do today? \n");
   
   struct Item one;
   one.id = 1; /* id of ITEM is 1 */
   fgets(one.text,100,stdin); /* reads user input into text var, size = 100, std input */
   printf("Great! So the first thing to do today is... %s \n",one.text);
  return 0;
}
