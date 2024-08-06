/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Free all nodes in the quotes linked list */
void free_nodes(Node **list_head_ptr) {
	
	// Initialize variable to walk through list
	Node *traversePtr = *list_head_ptr;
	Node *nextNode;

	/*
	** If the current node isn't null (we are not at the end of the list),
	** then record the next node, free the current, and move to the next node.
	*/
	while (traversePtr != NULL) {

		nextNode = traversePtr -> next;
		free(traversePtr);
		traversePtr = nextNode;

	}
	
}
