#include <stdio.h>
#include <stdlib.h>
#include "myHeader.h"

int main()
{

    testUI();

    return 0;
}

void testUI()
{
    /* Declare local variables */
    
    int* x;
    int* y;
    struct Item* ptrA;
    struct Item* ptrB;
    struct Item* ptrC;
    
    /* Allocate memory for pointers */
    x = malloc(sizeof(*x));
    y = malloc(sizeof(*y));
    
    *x = 3;
    *y = 4;
    
    ptrA = malloc(sizeof(*ptrA));
    ptrB = malloc(sizeof(*ptrB));
    ptrC = malloc(sizeof(*ptrC));
    
    printf("What would I like to do in the night?");
    fgets(ptrA->text,100,stdin);
    printf("%s \n", ptrA->text);
    
    printf("The value of x is: %d \n", *x);
    printf("The value of y is: %d \n", *y);
    printf("Hi! Back from your morning run?");
    printf(" Time to...build, write, read, play guitar!!");
    
    printf("What do you want to do today? \n");
    
    struct Item one;
    one.id = 1; /* id of ITEM is 1 */
    fgets(one.text,100,stdin); /* reads user input into text var, size = 100, std input */
    printf("Great! So the first thing to do today is... %s \n",one.text);
}