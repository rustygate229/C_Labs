/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Deletes a node from the linked list given its key */
void delete_node(Node **list_head_ptr, int key) {
	
	/* Initialize variables to find node */
	Node *traversePtr = *list_head_ptr;
	Node *priorNode;

	// If the linked list is not empty
	if (traversePtr != NULL) {

		/*
		** If it is the first node, then set the list_head
		** value to the second node, and free the first
		*/
		if ( key == (**list_head_ptr).Quote.key) {

			*list_head_ptr = traversePtr->next;
			free(traversePtr);			

		} else {

			/* Otherwise, find the element */
			while (traversePtr->Quote.key != key) {

				priorNode = traversePtr;
				traversePtr = traversePtr->next;

			}

			/* Erase the previous node's point to the node to be deleted */
			priorNode->next = traversePtr->next;
			free(traversePtr); // free and delete it

		}

	}
	
}
