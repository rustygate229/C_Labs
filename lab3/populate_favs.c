/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/* Initializes and populates an array to contain the addresses
** of the quotes flagged as favorite by the user 
*/
char*** populate_favs(char** quotes, int* favNum) {

	int j; // Holds number of favorite quote

	/* Prompts for number of favorites and scans it */
	printf("Of these quotes, how many do you plan to put on your favorites list? ");

	scanf("%d", favNum); /* Designed so that the number of favorites is accessible from main */
	
	/* Allocates memory for array of strings */
	char*** favorites = (char ***) malloc((*favNum) * sizeof(char *));
	
	printf("\nEnter the number next to each quote you want on your favorites list: ");

	/* The address of every quote specified as a favorite is loaded into 
	** the favorites array 
	*/
	for (int i = 0; i < (*favNum); i++) {
		scanf("%d", &j);
		*(favorites + i) = quotes + j - 1;
	}

	return favorites; // pointer to favorites is returned
	
}

