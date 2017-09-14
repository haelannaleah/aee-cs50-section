/******************************************************************************
 * buggy.c
 * 
 * A slightly inaccurate division program.
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
    printf("Ohai! Let me divide things for you!\n");
    
    printf("Value a: ");
    int a = get_int();
    
    printf("Value b: ");
    int b = get_int();
    
    double quotient = a / b; 
    
    printf("%i / %i = %f \n", a, b, quotient);

}
