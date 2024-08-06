/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/* Creates and populates an array with the quotes entered by the user
** given the number of quotes 
*/
char** populate_quote(int* numQuotes) {

	/* Prompts for number of quotes and scans it */
	printf("How many quotes do you plan to enter? ");
	scanf("%d", numQuotes); // Designed so that number of quotes is accessible in main
	
	/* Allocates memory for an array to hold addresses to chars */
	char** quotes = (char **) malloc((*numQuotes) * sizeof(char *));

	/* Allocates memory for a 300 char string and null character. 
	** The address to that is stored within the quotes array initialized
	** above */
	for (int i = 0; i < (*numQuotes); i++) {
		*(quotes+i) = (char *) malloc( 301 * sizeof( char ));
	}

	printf("\nEnter %d quotes one to a line: ", (*numQuotes));
	getchar(); // Clears buffer (otherwise reads newline character as part of quote)

	// Each quote is loaded into the quotes array from stdin one at a time
	for(int i = 0; i < (*numQuotes); i++) {
		input_quote(*(quotes+i));
	}

	return quotes; // Returns pointer to quotes array
}

