/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Free all nodes in author linked list */
void free_authors(struct author **author_head_ptr) {
	
	/* Initialize variables to help traverse through linked list */
	struct author *traversePtr = *author_head_ptr;
	struct author *nextNode;

	// If the head pointer is not null
	while (traversePtr != NULL) {
		
		/* Record the value of the next node, and then free the current node.
		** Move to the next node.
		*/
		nextNode = traversePtr -> next;
		free(traversePtr);
		traversePtr = nextNode;

	} 
	
}
