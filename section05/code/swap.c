/******************************************************************************
 * swap.c
 * 
 * A program demonstrating how we might use passing by reference to swap
 * variables in a function
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 5
 * 10/3/2016
 *****************************************************************************/

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    // declare two variables to swap
    int x = 9;
    int y = 10;
    printf("x = %d y = %d\n", x, y);
    
    // pass the location of the variables to the swap function
    swap(&x,&y);
    
    // demonstrate the swap
    printf("x = %d y = %d\n", x, y);
}

/****************************************************************************
 * Given two pointers to integers, swap the values stored at those addresses.
 ****************************************************************************/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
