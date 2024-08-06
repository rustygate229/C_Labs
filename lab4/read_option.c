/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/*Print all the options and return chosen option */
int read_option() {
	
	int result;

	// print options
	printf("\nPlease enter an option between 1 and 7:\n");
	
	printf("1) Print quote entered on a specific date\n");
	printf("2) Print authors included in this list\n");
	printf("3) Print all quotes by a specific author\n");
	printf("4) Print all quotes\n5) Add a new quote\n");
	printf("6) Delete a quote\n7) Exit Program\n\nOption: ");
	
	// scan choice and return it
	scanf("%d", &result);
	return result;
}
