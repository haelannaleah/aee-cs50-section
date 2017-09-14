/******************************************************************************
 * hello.c
 * 
 * This program calls a function to greet a user by name.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 2
 * 9/16/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

// prototype
void hello(string first_name);

int main(int argc, string argv[])
{
    if (argc < 2) {
        return 0;
    }
    
    // call hello
    hello(argv[1]);
}

// the definition of hello
void hello(string first_name)
{
    printf("hello, %s\n", first_name);
}
