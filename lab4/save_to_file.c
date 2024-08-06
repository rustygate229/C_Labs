/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Writes quotes to output file given the linked list */
void save_to_file(Node *list_head, char * filename) {

	FILE *fptr = fopen(filename, "w"); // Creates the file with writing permission

	int i = 0; // Keeps count of the number of quotes written to file
	while (list_head != NULL) {
	
		/* Print each move and move on to the next node */	
		fprintf(fptr, "%s - %s\n%d/%d/%d\n", list_head->Quote.quote, list_head->Quote.author, list_head->Quote.date.month, list_head->Quote.date.day, list_head->Quote.date.year);
		list_head = list_head->next;

		// If it isn't the last node, then print a newline
		if (list_head != NULL) fprintf(fptr, "\n");

		i++; // Increment quote written
	}
	
	printf("A total of %d quotes were written to file %s\n", i, filename);
	fclose(fptr);
}
