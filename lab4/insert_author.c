/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Inserts author node into author linked list in alphabetical order */
void insert_author(struct author **author_head_ptr, struct author *newNodePtr) {
	
	// Initialize variables to walk through list
	struct author *traversePtr = *author_head_ptr;
	struct author *priorNode;

	/* If the list is empty, then make the node the first node */
	if (*author_head_ptr == NULL) {
		*author_head_ptr = newNodePtr; // head points to the node
		newNodePtr->next = NULL; // mext node is NULL

	/*
	** If the node must be entered in the front, but there are other nodes in the list.
	** This is checked by comparing the first value in the linked list with the current node
	*/
	} else if (strcmp((**author_head_ptr).author_name ,newNodePtr->author_name) > 0) {

		newNodePtr->next = *author_head_ptr; // The current first node is the new second node
		*author_head_ptr = newNodePtr; // The node to be added is the new first node

	} else {
	
		// Traverse such that priorNode is the node before and traversePtr is the node after the new node
		traverse_to_author(&traversePtr, &priorNode, &newNodePtr);
		
		newNodePtr -> next = traversePtr;
		priorNode -> next = newNodePtr;
	}
}
