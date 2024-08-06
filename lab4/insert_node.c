/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Insert quote node into quotes linked list */
void insert_node(Node **list_head_ptr, Node *newNodePtr) {
	
	// Intialize variables to traverse through the nodes
	Node *traversePtr = *list_head_ptr;
	Node *priorNode;

	// If the list is empty, then make the node the first node
	if (*list_head_ptr == NULL) {
		*list_head_ptr = newNodePtr;
		newNodePtr->next = NULL;

	/* If there are other nodes, but the new node must be the first,
	** then the head points to the node to be added and the second node is the previously
	** first node */
	} else if ((**list_head_ptr).Quote.key > newNodePtr->Quote.key) {

		newNodePtr->next = *list_head_ptr;
		*list_head_ptr = newNodePtr;

	} else {
		/* Otherwise, traverse through the list, find the current position and add it*/
		traverse_to_point(&traversePtr, &priorNode, newNodePtr);
		
		newNodePtr -> next = traversePtr;
		priorNode -> next = newNodePtr;
	}
}
