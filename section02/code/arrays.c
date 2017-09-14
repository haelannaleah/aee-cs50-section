/******************************************************************************
 * arrays.c
 * 
 * Demonstrate the properties of arrays and strings.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 2
 * 9/16/2016
 *****************************************************************************/

#include "cs50.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    // declare a char array, and set it equal to hello
    char char_array1[] = "hello";
    printf("char array1: %s, %lu\n", char_array1, strlen(char_array1));
    
    // declare a char array, and set it equal to a bunch of characters
    char char_array2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("char array2: %s, %lu\n", char_array2, strlen(char_array2));
    
    // declare a char array, and set it equal to a bunch of characters
    char char_array3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("char array3: %s, %lu\n", char_array3, strlen(char_array3));
    
    // declare and don't immediately initialize a char array of size six
    char char_array4[6];
    char_array4[0] = 'h';
    char_array4[1] = 'e';
    char_array4[2] = 'l';
    char_array4[3] = 'l';
    char_array4[4] = 'o';
    char_array4[5] = '\0';
    printf("char array4: %s, %lu\n", char_array4, strlen(char_array4));
    
    // declare a string and set it equal to the string literal "hello"
    string string_dec = "hello";
    printf("string: %s, %lu\n", string_dec, strlen(string_dec));

    // declare a char array and set it equal to the string literal "hello"
    char* star_dec = "hello";
    printf("char*: %s, %lu\n", star_dec, strlen(star_dec));
    
    /*******************************/
    /* mutability and immutability */
    /*******************************/
    
    // mutable
    printf("changing the first letter of array declaration...\n");
    char_array1[0] = 'i';
    printf("%s\n", char_array1);
    
    printf("changing the first letter of bracket declaration...\n");
    char_array2[0] = 'j';
    printf("%s\n", char_array2);
    
    printf("changing the first letter of bracket declaration...\n");
    char_array3[0] = 'k';
    printf("%s\n", char_array3);
    
    printf("changing the first letter of bracket declaration...\n");
    char_array4[0] = 'l';
    printf("%s\n", char_array4);
    
    // immutable
    //printf("changing the first letter of string declaration...\n");
    //string_dec[0] = 'k';
    //printf("%s\n", string_dec);
    
    //printf("changing the first letter of star declaration...\n");
    //star_dec[0] = 'l';
    //printf("%s\n", star_dec);
}