/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S 
** ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date_entered {
	int day;
	int month;
	int year;
};

struct Data {
	char quote[750];
	char author[100];
	int key;
	struct Date_entered date;
};

typedef struct Node {
	struct Data Quote;
	struct Node *next;
} Node;

struct author {
	char author_name[100];
	struct author *next;
};

/* 
** This function takes in the name of the input file, and a pointer to head of the linked list, 
** and loads the linked list with quote data
*/
void read_quote_data(char *filename, Node **list_head_ptr);

/* 
** Inserts a loaded node into the linked list based on its key.
** Inserts each node based on ascending order
*/
void insert_node(Node **list_head_ptr, Node *newNodePtr);

/* 
** Deletes a given node from the linked list based on its key, and frees allocated memory
*/
void delete_node(Node **list_head_ptr, int key);

/*
** Scans the file for ONE quote, ONE author, and ONE date and loads in into a node
*/
void get_data_for_node(FILE *fptr, Node *nodePtr);

/*
** Splits a quote - author line into quote and author, and then loads them into their respective string
*/
void split_quote(char *text, char* quote, char* author);

/*
** Returns the value of the key based on the day, month, and year
*/
int generate_key(int day, int month, int year);

/*
** Prints the quotes, authors, and dates onto the terminal
*/
void print_quotes(Node *list_head);

/*
** Edits the value of traverse and prior so that the newNodePtr must be entered at the "position in the list" of traverse 
** This method is meant for the Node struct
*/
void traverse_to_point(Node **traverse, Node **prior, Node *newNodePtr);

/*
** Edits the value of traverse and prior so that newNodePtr must be entered st the "postion in the list" of traverse
** This method is meant for the author struct
*/
void traverse_to_author(struct author **traverse, struct author **prior, struct author **newNodePtr);

/*
** Gives user 7 options and returns the option they selected
*/
int read_option();

/*
** Builds a linked list of authors headed by the value of author_head_ptr given the linked list of quotes
*/
void authors_in_list(Node *list_head, struct author **author_head_ptr);

/*
** Prints the authors in the linked list
*/
void print_authors(Node *list_head);

/*
** Prints the quotes given a specific author which is specified by the user
*/
void print_quotes_author(Node *list_head);

/*
** Prints the quotes given a specific date which is specified by the user
*/
void print_quotes_date(Node *list_head);

/*
** Checks whether an author is already in the linked list, and returns true or false accordingly
*/
int contains_author(char * author, struct author *author_head);

/*
** Inserts an author into the linked list in alphabetical order
*/
void insert_author(struct author **author_head_ptr, struct author *newNodePtr);

/*
** Wrapper function that executes the option chosen by the user
*/
void execute_option(void (**fp_array)(Node *), int option, Node **list_head_ptr, char * outputFile);

/*
** Asks user for quote, author, and date. Then adds them to the linked list 
*/
void add_quote(Node **list_head_ptr);

/*
** Asks the user for the date, and deletes the matching quote
*/
void delete_quote(Node **list_head_ptr);

/*
** Writes quote data to the output file specified by user
*/
void save_to_file(Node *list_head, char * filename);

/*
** Frees all the nodes in the quotes linked list
*/
void free_nodes(Node **list_head_ptr);

/*
** Frees all the nodes in the author linked list
*/
void free_authors(struct author **author_head_ptr);

