/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/* Prints out the favorite quotes to stdout, given the array containing
** addresses to each favorite quote and the number of favorite quotes
*/
void output_favs(char*** favorites, int favQuotes) {

	printf("\nThe quotes on your favorite list are: \n");
	
	/*
	** Each element holds an address, so after each value is "indexed", it
	** is dereferenced to print the favorite quote.
	*/
	for (int i = 0; i < favQuotes; i++) {
		printf("%d.  %s\n", i+1, *(*(favorites + i)));
	}

}

