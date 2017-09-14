/******************************************************************************
 * sorts.c
 * 
 * Sort a list of numbers using various algorithms.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 3
 * 9/24/2016
 *****************************************************************************/
 
#include <cs50.h>
#include <stdio.h>

#define LENGTH 5

// helper prototype
void printIntArray(int array[], int length);
void bubble_sort(int array[], int n);
void selection_sort(int array[], int size);
void insertion_sort(int array[], int size);

int main(void)
{
    // here, we're just making an random list
    // in an actually program, we would make sure to explain these values
    int unsorted[LENGTH] = {6,8,7,1,4};
    
    printf("Unsorted: ");
    printIntArray(unsorted, LENGTH);
    
    printf("Insertion_Sorted: ");
    insertion_sort(unsorted, LENGTH);
    
    printf("Bubble sorted: ");
    bubble_sort(unsorted, LENGTH);
    
    printf("Selection sorted: ");
    selection_sort(unsorted, LENGTH);
    
}
/**
 * Sorts array in place using insertion sort
 */
void insertion_sort(int array[], int n)
{
    // iterate over the array
    for (int i = 0; i < n; i++)
    {
        // look at current element to insert
        int to_insert = array[i];
        
        // iterate over the sorted part of the array to find place to insert
        int j = i - 1;
        while ( j >= 0 && to_insert < array[j])
        {
            // shift the values up to make space for an insert
            array[j + 1] = array[j];
            j--;
        }
        
        // insert the value in the appropriate place
        array[j + 1] = to_insert;
    }
}


/**
 * Sorts array in place using bubble sort - optimizes to end if there are
 * no swaps
 */
void bubble_sort(int array[], int n)
{
    // cycle through array
    for(int k = 0; k < n - 1; k++)
    {
        // optimize; check if there are no swaps
        int swaps = 0;

        // swap adjacent elements if out of order
        for(int i = 0; i < n - 1 - k; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;

                swaps++;
             }
        }
        printIntArray(array,n);
        if (!swaps)
            break;
    }
    printIntArray(array, n);
}

/**
 * Sorts array in place using selection sort
 */
void selection_sort(int array[], int size)
{
    // iterate over array
    for(int i = 0; i < size - 1; i++)
    {
        // smallest element and its position in unsorted array
        int smallest = array[i];
        int smallest_index = i;

        // iterate over unsorted part of array
        for(int k = i + 1; k < size; k++)
        {
            // find the next smallest element and position
            if (array[k] < smallest)
            {
                smallest = array[k];
                smallest_index = k;
            }
        }

        // swap the current element with the smallest
        int temp = array[i];
        array[i] = smallest;
        array[smallest_index] = temp;
        
        printIntArray(array,size);
    }
    printIntArray(array, size);
}

/* function that prints int arrays for convenience */
void printIntArray(int array[], int length) 
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}