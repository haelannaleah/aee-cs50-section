/******************************************************************************
 * spell_sol.c
 * 
 * Given a string, print out each letter.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 2
 * 9/16/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get string from user
    printf("Give me a string: ");
    string s = set_string();
    
    // print out each letter
    // note: n is defined in the intialization step!
    for (int i = 0, length = strlen(s); i < length; i++)
    {
    	printf(“%c\n”, s[i]);
    }

}