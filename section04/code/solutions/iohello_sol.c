/******************************************************************************
 * iohello_sol.c
 * 
 * A program that writes "hello, world!" to a file.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 4
 * 9/26/2016
 *****************************************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // open file "hello.txt" in write only mode
    FILE* out = fopen("hello.txt", "w");
    
    // check that it opened successfully
    if(out == NULL)
        return 1;

    // create our message
    char* hello = "hello, world\0";
    
    // output message to file
    fputs(hello, out);
    
    //close the file
    fclose(out);
}

