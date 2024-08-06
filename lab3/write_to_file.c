/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/* Writes the quotes, favorite quotes to the file given */
void write_to_file(FILE *fptr, char **quotes, char ***favs, int numQuotes, int favQuotes) {

	/* Writes the quotes to the file by iterating through each address in 
	** in quotes and deferencing each address to get the value */
	fprintf(fptr, "Inspiring quotes:\n");
	for (int i = 0; i < numQuotes; i++) {

		fprintf(fptr, "%s\n", *(quotes+i));

	}

	/* Writes the favorites to the file by iterating through every address, which
	** points to another address, which points to the quote. Therefore, each address
	** is dereferenced twice to get the quote.
	*/
	fprintf(fptr, "\nMy favorites are:\n");
	for (int i = 0; i < favQuotes; i++) {
	
		fprintf(fptr, "%s\n", **(favs+i));

	}

}

