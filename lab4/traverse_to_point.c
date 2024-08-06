/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Load value of traverse and priorNode such that traverse points to the node
** that comes before newNodePtr and priorNode points to the node that comes after
*/
void traverse_to_point(Node **traverse, Node **priorNode, Node *newNodePtr) {

	/* If current node isn't null (which means it isn't at the end) AND the current node
	** has a key value that is less that newNodePtr, then move on.
	**
	** While loop ends when either it is at the end, or if the current node has a higher key value.
	*/
	while ( (*traverse) != NULL && (*traverse)->Quote.key < newNodePtr->Quote.key) {

		(*priorNode) = (*traverse);
		(*traverse) = (*traverse)->next;
	}
	
}
