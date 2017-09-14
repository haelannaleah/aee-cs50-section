/******************************************************************************
 * buggy_swap.c
 * 
 * A program demonstrating the dangers of passing by value.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 5
 * 10/3/2016
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void buggy_swap(int a, int b);

int main(void)
{
    int x = 9;
    int y = 10;
    
    printf("x = %d y = %d\n", x,y);
    
    buggy_swap(x,y);
    
    printf("x = %d y = %d\n", x,y);
}

// create a good swap function!

/* (hypothetically) swaps a and b */
void buggy_swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
