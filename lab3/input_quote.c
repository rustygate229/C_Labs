/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/*
** Reads a single quote from stdin, and loads it into quote {the char array}
*/
void input_quote(char * quote) {

	char x = getchar(); // Read first character
	int j = 0; // Counter variable

	/*
	** Keep reading the next character, until a newline character is detected.
	** After reading each character, it is loaded into the array.
	*/
	while (x != '\n') {
		
		*(quote+j) = x;
	
		x = getchar();
		j++;		
	}

	/* Newline character defines the end of the quote, so the null character 
	** is added to the end.
	*/
	*(quote+j) = '\0';

}

