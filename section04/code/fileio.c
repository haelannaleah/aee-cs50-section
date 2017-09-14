/******************************************************************************
 * fileio.c
 * 
 * A program demonstrating the general form of file I/O. Based on source code
 * available in the CS50 archives.
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
    // open file "input.txt" in read only mode
    FILE* in = fopen("input.txt", "r");

    // always make sure fopen() doesn't return NULL!
    if(in == NULL) 
    {
        return 1;
    }
   
    // open file "output.txt" in write only mode
    FILE* out = fopen("output.txt", "w");
    
    // make sure you could open file
    if(out == NULL)
    {
        return 2;
    }

    // get character
    int c = fgetc(in);

    while(c != EOF)
    {
        // write character to output file
        fputc(c, out);
        c = fgetc(in);
        
    }

    // close files to avoid memory leaks!
    fclose(in);
    fclose(out);
}

