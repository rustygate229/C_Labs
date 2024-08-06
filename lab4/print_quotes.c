/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Print all quotes in a linked list */
void print_quotes(Node *list_head) {

	Node *traversePtr = list_head;


	/* Print formatted version of each quote, until the last 
	** node, at which point the traverse pointer points to null */
	while (traversePtr != NULL) {
	
		printf("Quote: %s\n", traversePtr->Quote.quote);
		printf("Author: %s\n", traversePtr->Quote.author);
		printf("Date Entered: %d/%d/%d\n\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);

		traversePtr = traversePtr->next; // Move to next node

	}
}
