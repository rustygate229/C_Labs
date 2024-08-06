/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Print quotes based on date given by user */
void print_quotes_date(Node *list_head) {
	
	// Helps traverse through list
	Node *traversePtr = list_head;

	// Ask for the date desired
	int day, month, year, tempKey;
	printf("Enter quote date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	// Check every node
	while (traversePtr != NULL) {

		// If the key generated from the date matches the existing key, then print it
		tempKey = generate_key(day, month, year);
		if (tempKey == traversePtr->Quote.key) {

			printf("Quote: %s\n", traversePtr->Quote.quote);
			printf("Author: %s\n", traversePtr->Quote.author);
			printf("Date Entered: %d/%d/%d\n\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);

		}

		traversePtr = traversePtr->next;

	}
}
