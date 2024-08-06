/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Asks for quote info and adds it to the linked list */
void add_quote(Node **list_head_ptr) {
	
	Node *newNodePtr = (Node *) malloc(sizeof(Node)); // Allocates memory for node

	/* Asks for quote information and populates the new node with it */
	printf("Enter the quote: ");
	scanf("%*c%[^\n]", newNodePtr->Quote.quote);
	printf("Enter the author: ");
	scanf("%*c%[^\n]", newNodePtr->Quote.author);
	printf("Enter today's date (xx/xx/xxx): ");
	scanf("%d/%d/%d", &(newNodePtr->Quote.date.month), &(newNodePtr->Quote.date.day), &(newNodePtr->Quote.date.year));
	
	/* Populates they key and loads it */
	newNodePtr->Quote.key = generate_key(newNodePtr->Quote.date.day, newNodePtr->Quote.date.month, newNodePtr->Quote.date.year);
	
	printf("The quote has been added to the file.\n");

	// Inserts node into linked list
	insert_node(list_head_ptr, newNodePtr);
}
