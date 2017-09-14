/******************************************************************************
 * linked.c
 * 
 * Exercises related to linked lists.
 * 
 * Annaleah Ernst
 * CS50 Section 2016
 * Week 5
 * 10/3/2016
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

// declare our linked list node
typedef struct node
{
    int n;
    struct node *next;
} node;

// function prototypes
bool insert(int value, node *list);
bool insert_sorted(int value, node *list);
bool search(int value, node *list);
bool delete_node(int value, node *list);
void print_list(node *list);

// global variable to keep track of the head of the list
node *head;

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./linked num_elts");
    }
    int num_elts = atoi(argv[1]);

    // fill up our linked list
    for (int i = 0; i < num_elts; i++)
    {
        printf("Give me an int to insert\n");
        int num = GetInt();
        insert(num, head);
    }
    
    print_list(head);
    
}

/*************************************************************************
 * Delete a node from a linked list
 * Return true if deletion is successful, else return false.
 *************************************************************************/
bool delete_node(int value, node *list)
{
    // TODO
    return false;
}


/*************************************************************************
 * Insert a node into an unsorted linked list.
 * Return true if value is inserted, else return false.
 *************************************************************************/
bool insert(int value, node *list)
{
	// TODO
	
    // new node
    
    // update new node's value
    
    // point at what head is pointing to
    
    // update head (it's a pointer!)
    
    return false;
}

/*************************************************************************
 * Insert a node into a sorted linked list.
 * Return true if value is inserted, else return false.
 *************************************************************************/
bool insert_sorted(int value, node *list)
{
    // create new node
    
    // create curr and prev pointers
    
    // go through list
        
        // if value < this node
        
            // insert before
            
        // if value > this node
        
            // go to next node
            
            // update pointer
        
        // if value == node
        
            // free new node
            
            // return false
            
    return false;
}

/*************************************************************************
 * Search a linked list
 * Return true if value is found, else return false.
 *************************************************************************/
bool search(int value, node *list)
{
    // TODO
    return false;
}

/*******************************************************
 * for convenience's sake, a function to print our lists
 *******************************************************/
void print_list(node *list)
{
    // create a crawler
    node* crawler = list;
    
    // walk along list and print elements
    while (crawler != NULL)
    {
        printf("%i ", (*crawler).n);
        crawler = crawler->next;
    }

    // print a newline for readibility
    printf("\n");
}