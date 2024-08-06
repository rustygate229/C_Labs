/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Print list of authors in linked list */
void print_authors(Node *list_head) {

	// Intialize a linked list for authors and populate it
	struct author *author_head = NULL;
	authors_in_list(list_head, &author_head);

	struct author *traverse = author_head;

	/*
	** Print each author to screen
	*/
	printf("\nAuthors represented in these quotes are:\n");
	while (traverse != NULL) {

		printf("%s\n", traverse->author_name);
		traverse = traverse->next;

	}

	// Free linked list of authors
	free_authors(&author_head);	
}
