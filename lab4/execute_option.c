/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

void execute_option(void (**fp_array)(Node *), int option, Node **list_head_ptr, char * fileOut) {
	
	// If the options are one of the first four, then it is passed into the function pointer.
	if (option <= 3) {
		fp_array[option](*list_head_ptr);
	} else if (option == 4) {
		// User chose to add a quote
		add_quote(list_head_ptr);
	} else if (option == 5) {
		// User chose to delete a quote
		delete_quote(list_head_ptr);
	} else {
		/*
		** User chose to quit, so write the quotes to the output file and free all nodes
		*/
		save_to_file(*list_head_ptr, fileOut);
		free_nodes(list_head_ptr);
	}
}
