/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY
** POLICY WITH RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include <stdio.h>

#include <stdlib.h>

/* Inputs a single quote from stdin, and loads it into a char array */
void input_quote(char * quote);

/* Prints out an array of quotes onto stdout */
void output_quotes(char ** quotes, int numQuotes);

/* Prints out an array of favorite quotes into stdout */
void output_favs(char *** favorites, int favQuotes);

/* Populates an array with the quotes entered by the user, and returns
** the pointer of that array */
char** populate_quote(int* numQuotes);

/* Populates an array with the addresses of the favorite quotes specified
** by the user, and returns the pointer of that array */
char*** populate_favs(char** quotes, int* favQuotes);

/* Asks the user to save the data, and if yes, saves the quotes and favorite
** quotes in a file specified by the user */
void save_data(char** quotes, char*** favs, int numQuotes, int favQuotes);

/* Writes the quotes and favorite quotes to a file */
void write_to_file(FILE * fptr, char** quotes, char*** favs, int numQuotes, int favQuotes);

