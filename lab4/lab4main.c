/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S
** ACADEMIC INTEGRITY POLICY
*/ 

/* Name: Mayank Karnati */

#include <stdio.h>

#include "lab4.h"


/*
** This program reads a series of quotes, 
*/
int main(int argc, char *argv[]) {

	// Record the input and output file names
	char * inputFile = argv[1];
	char * outputFile = argv[2];

	// Initialize and populate the quotes into a linked list
	Node *list_head = NULL;
	read_quote_data(inputFile, &list_head);

	// Intialize function pointer array
	int option;
	void (*fp_array[])(Node *) = {print_quotes_date, print_authors, print_quotes_author, print_quotes};

	// Ask for user's option and keep executing until they choose to quite
	do {
		option = read_option();
		execute_option(fp_array, option - 1 , &list_head, outputFile);

	} while (option != 7);

	return(0);
}
