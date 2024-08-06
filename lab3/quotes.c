/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY
** ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC
** INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include <stdio.h>

#include "lab3.h"

/* 
** This program takes a list of quotes from the user, asks for a subset
** of those quotes to assign as favorites, and saves those quotes in a file 
** specified by the user 
*/
int main() {
	
	int numQuotes; // Keeps track of number of quotes entered by user
	int favQuotes; // Keeps track of number of favorites specified by user

	char **quotes = populate_quote(&numQuotes); /* Array to hold quotes */

	output_quotes(quotes, numQuotes); // Prints out the quotes

	char ***favorites = populate_favs(quotes, &favQuotes); /* Array to hold favorites */

	output_favs(favorites, favQuotes);	// Prints out the favorites

	save_data(quotes, favorites, numQuotes, favQuotes);	// Saves data within a file

	/*
	** Frees dynamically allocated arrays
	*/
	for (int i = 0; i < numQuotes; i++) {
		free(*(quotes+i));
	}

	free(quotes);
	free(favorites);

	return (0);
}
