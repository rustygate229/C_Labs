/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

void authors_in_list(Node *list_head, struct author **author_head_ptr) {

	// Initialize variable to move through linked list
	Node *traversePtr = list_head;

	struct author *newAuthorPtr; // declare author struct ptr


	// Go through every quote in the linked list
	while (traversePtr != NULL) {

		// If the author struct does not already contain the current node's author
		if (!contains_author(traversePtr->Quote.author, *author_head_ptr)) {
			
			// Populate a new author node with their name
			newAuthorPtr = (struct author *) malloc(sizeof(struct author));
			strcpy(newAuthorPtr->author_name, traversePtr->Quote.author);

			// Insert that into the author linked list
			insert_author(author_head_ptr, newAuthorPtr);

		}
		// Move onto the next node in quote linked list
		traversePtr = traversePtr -> next;

	}
	
}
