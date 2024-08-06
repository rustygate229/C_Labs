/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
** STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE 
** UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
*/

/* Name: Mayank Karnati */

#include "lab4.h"

// Generates key based on date
int generate_key(int day, int month, int year) {

	int result = 0;
	
	// Record 2 nibbles and shift left 2 nibbles to make space
	result = (result | year) << 8;
	result = (result | month) << 8;
	result = (result | day); // Day is the last nibble

	return result;
}
