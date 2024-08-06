/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Split quote and load the quote and author */
void split_quote(char  *text, char *quote, char *author) {

	// Get pointer to the dash
	char * delim = strchr(text, '-');

	/* Since it is contiguous, the pointer of dash - pointer of the start
	** is the length. Then, the quote must be up to that point.
	** The author must come after it.
	*/
	int quoteLen = delim - text - 1;
	strncpy(quote, text, quoteLen);
	quote[quoteLen] = '\0';

	strcpy(author, delim + 2); // Copy the author in
	
}
