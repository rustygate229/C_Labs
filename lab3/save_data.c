/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
** TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
** RESPECT TO THIS ASSIGNMENT */

/* Name: Mayank Karnati */

#include "lab3.h"

/* Prompts user to save data, and if yes, asks for a filename to save the quotes
** and favorite quotes in. Then, saves the data in that file
*/
void save_data(char** quotes, char*** favorites, int numQuotes, int favQuotes) {

	printf("Do you want to save them (1=yes, 2=no): ");
	getchar(); // clears buffer (otherwise newline character is registered

	// Only if the user elects to save data, filename is prompted and data is saved
	if (getchar() == '1') {

		char filename[255]; // string to hold filename
		
		printf("\nWhat file name do you want to use? ");
		scanf("%s", filename); // scans filename
		
		// Opens file with writing permission
		FILE *fptr = fopen(filename, "w");
	
		// Checks if file has been opened properly
		if (fptr != NULL) {
			
			/* Writes data to file and closes it */
			write_to_file(fptr, quotes, favorites, numQuotes, favQuotes);
			fclose(fptr);
			printf("\nYour quotes have been saved to the file %s\n", filename);

		}
	}
}

