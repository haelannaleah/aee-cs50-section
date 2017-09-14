/******************************************************************************
 * sorts.c
 * 
 * Practice various sorting algorithms.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 3
 * 9/24/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

#define LENGTH 8

// helper prototypes
void bubble_sort(int values[], int n);
void selection_sort(int values[], int size);
void insertion_sort(int values[],int size);
void sort(int values[], int n);
void printIntArray(int values[], int length);

int main(void)
{
    // here, we're just making an random list
    // in an actual program, we would make sure to explain these values
    int unsorted[LENGTH] = {6,8,7,1,4,3,5,2};
    
    printf("Unsorted: ");
    printIntArray(unsorted, LENGTH);
    
    printf("Sorted: ");
    sort(unsorted, LENGTH);
}

/**
 * Sorts array in place using bubble sort - optimizes to end if there are
 * no swaps
 */
void bubble_sort(int values[], int n)
{
    // cycle through array
    
        // optimize; check if there are no swaps

        // swap adjacent elements if out of order

            // check if adjacent elements are out of order
                
                // if so, swap
                
                // increment swaps

        // check if there were any swaps on the last iteration

    //printIntArray(values, n);
    printf("TODO\n");
}

/**
 * Sorts array in place using insertion sort
 */
void insertion_sort(int array[], int n)
{
   // iterate over the array

        // look at current element to insert
        
        // iterate over the sorted part of the array to find place to insert

            // shift the values up to make space for an insert
        
        // insert the value in the appropriate place
        
    //printIntArray(values, n);
    printf("TODO\n");
}

/**
 * Sorts array in place using selection sort
 */
void selection_sort(int values[], int size)
{
    // iterate over array

        // smallest element and its position in unsorted array

        // iterate over unsorted part of array

            // find the next smallest element and position

        // swap the current element with the smallest
        
    //printIntArray(values, n);
    printf("TODO\n");
}

void sort(int values[], int n)
{
    // bubble_sort(values, n);
    insertion_sor(values, n);
    // selection_sort(values,n);
    
    // printIntArray(values, n);
    printf("TODO\n");
}

/* function that prints int arrays */
void printIntArray(int array[], int length) 
{
    for (int i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}