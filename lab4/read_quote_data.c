/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Populate linked list with quote data */
void read_quote_data(char *filename, Node **list_head_ptr) {

	// Open the file with read permission
	FILE *fptr = fopen(filename, "r");

	Node *newNodePtr;
	int i = 0; // Keep count of how many were read
	
	printf("Reading information from file: %s\n", filename);

	do {

		newNodePtr = (Node *) malloc (sizeof(Node)); // Initialize new node
		get_data_for_node(fptr, newNodePtr); // Load it with info

		insert_node(list_head_ptr, newNodePtr); // Insert it
		i++;

	} while (fscanf(fptr, "%*c%*c") != EOF); // Continue until end of file


	printf("A total of %d quotes were read from the file %s\n\n", i, filename);
	fclose(fptr);	
}
