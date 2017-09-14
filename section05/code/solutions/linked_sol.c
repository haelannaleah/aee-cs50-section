/******************************************************************************
 * linked_sol.c
 * 
 * Examples of insertion, deletion, and searching with linked lists.
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
	// pointer to element in list
    node* cur = list;
    node* prev = list;
	
    // while we aren't at the end of the list
    while (cur != NULL)
    {
        // check the value
        if (cur->n == value)
        {
			// update the previous pointer to point to the next element instead
			prev->next = cur->next;
			
			// free the memory (delete the node)!
			free(cur);
			
			// we successfully deleted!
            return true;
        }
        // update pointer
		prev = cur;
        cur = cur->next;
		
    }
    // didn't find anything to delete
    return false;
}

/*************************************************************************
 * Insert a node into an unsorted linked list.
 * Return true if value is inserted, else return false.
 *************************************************************************/
bool insert(int value, node *list)
{
	// create new node
	node* new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return false;
    }
    
	// updated new node's value and next fields
    new_node->n = value;
    new_node->next = head;
	
	// update the head (it's a pointer) and return!
    head = new_node;
    return true;
}

/*************************************************************************
 * Insert a node into a sorted linked list.
 * Return true if value is inserted, else return false.
 *************************************************************************/
bool insert_sorted(int value, node *list)
{
    // create new node
    node* new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return false;
    }
    new_node->n = value;
    
    // create curr and prev pointers
    node* cur = list;
    node* prev = NULL;
    
    // for an empty list
    if (head == NULL)
    {
        head = new_node;
        return true;
    }
    
    // go through list
    while(cur != NULL)
    {
        // if value < this node
        if (value < cur->n)
        {
            // insert before
            new_node->next = cur;
            if (prev == NULL)
            {
                list = new_node;
            }
            else
            {
                prev->next = new_node;
            }
        }
        // if value > this node
        else if (value > cur->n)
        {
            // go to next node
            prev = cur;
            
            // update pointer
            cur = cur->next;
        }
        // if value == node
        else if (value == cur->n)
        {
            free(new_node);
            return false;
        }
    }
    
    // must be at the end of the list
    new_node->next = NULL;
    prev->next = new_node;
    return true;
}

/*************************************************************************
 * Search a linked list
 * Return true if value is found, else return false.
 *************************************************************************/
bool search(int value, node *list)
{
    // pointer to element in list
    node* ptr = list;
    
    // while we aren't at the end of the list
    while (ptr != NULL)
    {
        // check the value
        if (ptr->n == value)
        {
            return true;
        }
        // update pointer
        ptr = ptr->next;
    }
    // didn't find anything
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