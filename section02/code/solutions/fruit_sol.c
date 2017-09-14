/******************************************************************************
 * fruit_sol.c
 * 
 * This program accepts exactly SIZE fruits as command line arguments, and then
 * selects one of the fruits based on user input. This exercise deals with
 * command line arguments, program arguments, and wrapping indices since user 
 * input is unknown and may exceed SIZE.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 2
 * 9/16/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

// these are constants throughout the program and eliminate magic numbers
#define SIZE 5
#define NUM_ARGS 2

int main(int argc, string argv[]) 
{
    // make sure the use inputted the correct number of arguments
    if (argc < NUM_ARGS)
    {
        // otherwise, don't execute the rest of main
        return 1;
    }
    
    // get user random index
    int random = atoi(argv[1]);
    
    // declare an array of size SIZE
    string fruits[SIZE];
    
    // fill array with user input
    for (int i = 0; i < SIZE; i++) 
    {
        printf("Enter a fruit: ");
        fruits[i] = GetString();
    }
    
    // print the command line argument's index and what we're doing with it
    printf("Command input was %d.\n", random);
    printf("Mod-ing by SIZE (%d).\n", SIZE);
    
    // get the final index (their input is guaranteed to be >= 1 and < INT_MAX)
    // we want it to loop around if the number is 
    int final_index = random % SIZE;
    
    // print the looped index and the fruit
    printf("The new index is %d.\n", final_index);
    printf("Your fruit is %s\n", fruits[final_index]);
}