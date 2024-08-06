/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Print quotes given an author by the user */
void print_quotes_author(Node *list_head) {

	
	Node *traversePtr = list_head;
	char author[100];

	// Ask for author's name
	printf("Enter author's name: ");
	scanf("%*c%[^\n]", author);

	// Check every node and print the quote if the author's name matches
	while (traversePtr != NULL) {
	
		if (strcmp(author, traversePtr->Quote.author) == 0) {

			printf("Quote: %s\n", traversePtr->Quote.quote);
			printf("Author: %s\n", traversePtr->Quote.author);
			printf("Date Entered: %d/%d/%d\n\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);

		}

		traversePtr = traversePtr->next;

	}
}
