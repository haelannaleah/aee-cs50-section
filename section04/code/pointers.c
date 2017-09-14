/******************************************************************************
 * pointers.c
 * 
 * A program demonstrating the versitility of pointers and their more confusing
 * notational aspects.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 4
 * 9/26/2016
 *****************************************************************************/

#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    
    // declare an int pointer
    int* ptr;
    
    // get an address of a local variable and store it in ptr
    int x = 50;
    ptr = &x;
    
    // go to address and get its value
    printf("%i\n", *ptr);
    
    // set x, y, and z to be some arbitrarily selected values
    int x = 2, y = 8, z = 12;
    
    // create pointers that are pointing to each of those values
    int* ptr_x = &x;
    int* ptr_y = &y;
    int* ptr_z = &z;
    
    // print out some potentially useful information about x
    printf("the value of x is %i\n", x);
    printf("the address of x is %p\n", &x);
    printf("the value of ptr_x is %p\n", ptr_x);
    printf("the address of ptr_x is %p\n", &ptr_x);
    printf("ptr_x points to the value %i\n", *ptr_x);
    printf("\n");
    
    // multiplication
    printf("z = x * y;\n");
    z = x * y;
    printf("z = %i\n\n", z);
    
    // in place multiplication
    printf("x *= y;\n");
    x *= y;
    printf("x = %i\n\n",x);
    
    // set y equal to the value ptr_x is pointing to (be careful where you place the *)
    printf("y = *ptr_x;\n");
    y = *ptr_x;
    printf("y = %i\n\n", y);
    
    // set what ptr_x is pointing to to be x * y
    printf("*ptr_x = y * z;\n");
    *ptr_x = x * y;
    printf("*ptr_x = x = %i\n\n", *ptr_x);
    
    // set the value of ptr_x to the value of ptr_y 
    // (make ptr_x point to what ptr_y is pointing at)
    printf("ptr_x = ptr_y;\n");
    ptr_x = ptr_y;
    printf("*ptr_x = *ptr_y = y = %i\n\n", *ptr_x);
    
    // set the variable x to be the value that ptr_x is pointing at times the value ptr_z is pointing at
    printf("x = (*ptr_y) * (*ptr_z);\n");
    x = (*ptr_y) * (*ptr_z);
    printf("x = y * z = %i\n",x);
    
}