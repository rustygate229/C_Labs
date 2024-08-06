/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/* Prints out the quotes to stdout, given the array of quotes
** and the number of quotes 
*/
void output_quotes(char **quotes, int numQuotes) {

	printf("\nYou've entered:\n");

	// Loops through each quote, deferences each address, and prints it
	for (int i = 0; i < numQuotes; i++) {
		printf("%d.  %s\n", i+1, *(quotes + i));
	}

}

