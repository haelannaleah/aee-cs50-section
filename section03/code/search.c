/******************************************************************************
 * search.c
 * 
 * Tells a user whether the number they entered is in a predefined list.
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

int main(void)
{
    // here, we're just making an random list
    // in an actually program, we would make sure to explain these values
    int my_list[LENGTH] = {1,4,6,7,8};
    
    // get a test value from the user
    printf("Type a value to find: ");
    int test_val = GetInt();
    printf("Checking if %i is in list.\n", test_val);
    
    // Design Note: the following line is an example of a ternary operator.
    //  We are setting the value of the variable is_there to "Success!" if the
    //  function binary_search returns true, otherwise, is_there is set to "Failure".
    //  When you are setting a variable to one of two possible values based on a
    //  conditional check, ternary operators are a concise way to do so.
    string is_there = binary_search(test_val, my_list, LENGTH) ? "Success!" : "Failure";
    printf("%s\n", is_there);
}

/************************************************
 * Accepts a value, list, and length of list
 * Assumes incoming list is sorted
 * Reuturns true if value is in list, else false
 ************************************************/
bool binary_search(int value, int values[], int n)
{
    // While unsearched is greater than 0
    
        // look at middle of list

        // If number found, return true

        // Else if middle number higher, search left

        // Else if middle number lower, search right

    // If we get to the end of the list, it wasn't there
    return false;
   
}