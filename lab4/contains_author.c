/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Returns true if author linked list contains a specific author */
int contains_author(char *author, struct author *author_head) {

	struct author *traversePtr = author_head;	

	/* Check every node, and if at any point the same author is found, return true */
	while (traversePtr != NULL) {

		if (strcmp (author, traversePtr -> author_name) == 0) {
			return 1;
		}

		traversePtr = traversePtr -> next;
	}

	// If it gets to this point, then the author is not in the list
	return 0;
}
