/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

// Asks user for the key of the node to be deleted and deletes it
void delete_quote(Node **list_head_ptr) {
	
	int day, month, year, key, confirm;
	
	// Asks user for they date of the quote
	printf("Please enter the date of the quote you wish to delete, (xx/xx/xxxx): ");
	scanf("%d/%d/%d", &month, &day, &year);

	// Generates the key and asks to confirm
	key = generate_key(day, month, year);
	printf("Do you really want to delete key %d ?\nIf yes, enter 1. If no, enter 2: ", key);
	scanf("%d", &confirm);

	/* If they confirm, then delete it */
	if (confirm == 1) {

		delete_node(list_head_ptr, key);
		printf("Key %d has been deleted.\n", key);

	}
}
