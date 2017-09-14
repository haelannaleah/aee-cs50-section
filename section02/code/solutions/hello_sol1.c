/******************************************************************************
 * hello_sol1.c
 * 
 * This program calls a function to impersonally greet a user.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 2
 * 9/16/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

// prototype
void hello(void);

int main(void)
{
    // call hello
    hello();
}

// the definition of hello
void hello(void)
{
    printf("hello, world\n");
}
