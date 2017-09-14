/******************************************************************************
 * search_sol.c
 * 
 * Tells a user whether the number they entered is in a predefined list using 
 * using binary search.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 3
 * 9/24/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

#define LENGTH 5

// search prototype
bool binary_search(int value, int values[], int n);

bool recursive_search(int value, int values[], int n, int lower, int upper);

int main(void)
{
    // here, we're just making an random list
    // in an actually program, we would make sure to explain these values
    int sorted_list[LENGTH] = {1,4,6,7,8};
    
    // get a test value from the user
    printf("Type a value to find: ");
    int test_val = GetInt();
    
    printf("Checking if %i is in list.\n", test_val);
    string is_there = search(test_val, sorted_list, LENGTH) ? "Success!" : "Failure";
    printf("%s\n", is_there);
    
}

/* 
 * Search a sorted array for a number; return true if it's in the array, else false.
 */
bool binary_search(int value, int values[], int n)
{
    // Set values for the top and the bottom of the search
    int lower = 0;
    int upper = n - 1;

    // Conduct the search
    while (lower <= upper)
    {
        // get the current center
        int middle = (upper + lower) / 2;

        if (values[middle] == value)
        {
            // we've found our value!
            return true;
        }
        else if (values[middle] < value)
        {
            // if our value is here, it's in the upper half
            lower = middle + 1;
        }
        else if (values[middle] > value)
        {
            // if our value it here, it's in the upper half
            upper = middle - 1;
        }
    }

    // we made it all the way through the list without finding it
    return false;
}


/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int lower = 0;
    int upper = n - 1;
    
    //sort(values, n);
    
    return recursive_search(value, values, n, lower, upper);
}


bool recursive_search(int value, int values[], int n, int lower, int upper)
{
    // base case
    if (lower == upper)
    {
        if (values[lower] == value)
        {
            return true;
        }
    }
    
    // check which half the value is in
    int midpoint = (lower + upper)/2;
    
    values[midpoint] > value ? (upper = midpoint - 1) : (lower = midpoint);
    
    // search the half that cointains the value
    recursive_search(value, values, n, lower, upper);

    return false;
}