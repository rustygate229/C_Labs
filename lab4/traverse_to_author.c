/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

// Load values of traverse and priorNode such that traverse comes after and prior comes before node to be added */
void traverse_to_author(struct author **traverse, struct author **priorNode, struct author ** newNodePtr) {

	// While not at the end of the list and the current node is alphabetically greater.
	while ( (*traverse) != NULL && strcmp((*traverse)->author_name, (*newNodePtr)->author_name) < 0) {

		// Move onto the next node
		(*priorNode) = (*traverse);
		(*traverse) = (*traverse)->next;
	}
	
}
