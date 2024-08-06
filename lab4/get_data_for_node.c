/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

/* Populate nodePtr with data from scanning the file */
void get_data_for_node(FILE *fptr, Node *nodePtr) {

	char quote[750];
	char author[100];
	char text[850];
	int day, month, year;
	
	// Scan the line and split the quote
	fscanf(fptr, "%[^\n]", text);
	split_quote(text, quote, author);

	// Load quote and author into the node
	strcpy(nodePtr->Quote.quote, quote);
	strcpy(nodePtr->Quote.author, author);

	// Generate key
	fscanf(fptr, "%d/%d/%d", &month, &day, &year);
	int key = generate_key(day, month, year);
	
	// Load key and dates into node
	nodePtr->Quote.key = key;
	nodePtr->Quote.date.day = day;
	nodePtr->Quote.date.month = month;
	nodePtr->Quote.date.year = year;
}
