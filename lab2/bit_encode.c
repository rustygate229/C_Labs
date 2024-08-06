/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
** THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY
** WITH RESPECT TO THIS ASSIGNMENT
*/

/* Name: Mayank Karnati */

#include <stdio.h>
#include <stdlib.h>

/* prompts for input from the user, and loads it into the char array passed in*/
void input_cleartext(unsigned char *clearText);

/* prints each char in an array as a hex value, but with 10 values per row */
void print_chars_hex(unsigned char *text); 

/* asks for 4 bit value from user, and returns an 8 bit key */
unsigned char create_key();

/* removes the right two bits of a, appends those two bits to the left, and returns a char with
** this new binary representation */
unsigned char rotate_right(unsigned char a);

/* removes the left two bits of a, appends those two bits to the right, and returns a char with
** this new binary representation */
unsigned char rotate_left(unsigned char a);

/* takes each char in clearText, encrypts it accordingly using the key, and loads the encrypted
** chars into encryptText */
void encrypt (unsigned char *clearText, unsigned char *encryptText, unsigned char key);


/* This program encrypts clear text given by the user using an 8 bit key provided by the user.
** The program inputs the clear text, then it provides the hex encoding of the clear text.
** The program encrypts the clear text by first genereating an 8 bit key based on the 4 bit value ** they enter, then performing an XOR operation which each character, and then a 2 bit rotation
** based on what position the character is in.
*/
int main () {
	

	unsigned char clearText[201];	/* array to hold clear text up to 200 characters */
	unsigned char encryptText[201];	/* array to hold encrypted text up to 200 characters */

	input_cleartext(clearText);	/* loads clear text */

	unsigned char key = create_key();	/* creates the key */

	/* encrypts the text and prints it */
	encrypt(clearText, encryptText, key);
	print_chars_hex(encryptText);

	return (0);

}

/* prints each char in an array as a hex value, but with 10 values per row */
void print_chars_hex(unsigned char *text) {

	#ifdef PROMPT
		printf("hex encoding:");
	#endif

	int i = 0;	/* counter variable*/

	/* loops through char array until the null char is detected, and it prints the hex value
	** of the char. Every 10 characters a \n is printed to make a new row */
	while (text[i] != '\0') {

		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%02x ", text[i]);
		i++;
	}
	printf("\n");

}

/* prompts for input from the user, and loads it into the char array passed in*/
void input_cleartext(unsigned char *clearText) {

	#ifdef PROMPT
		printf("Enter cleartext to be encrypted: ");
	#endif

	unsigned char c = getchar(); /* inputs first character */ 
	int i = 0;	/* counter variable */

	/* Until  each 200 characters are reached or a newline character is detected, the 
	** previously scanned value is loaded into array, and the next char is scanned */
	while ( i < 200 && c != '\n' ) {
		
		clearText[i] = c;

		c = getchar();	
		i++;	
	}
	clearText[i] = '\0';	/* add null character at the end */
	
	#ifdef PROMPT
		printf("Cleartext: %s\n", clearText);
		print_chars_hex(clearText);
	#endif
}

/* asks for 4 bit value from user, and returns an 8 bit key */
unsigned char create_key() {

	unsigned char result = 0;	/* key */
	unsigned char digit;

	#ifdef PROMPT
		printf("\nenter 4-bit key: ");
	#endif

	/* inputs each of the 4 chars, and each time processes the bit into they key.
	** Processes by shifting one bit to the right, and using OR operation against
	** 0x11, which records the inputted bit at the beginning of each nibble */
	for (int i = 0; i < 4; i++) {
		digit = getchar();
		
		if (digit == '0') {
			result = result << 1;	/* OR is excluded as OR against 0 is itself */
		} else {
			result = (result << 1) | 0x11;
		}	
	}
 
	return result;
}

/* removes the right two bits of a, appends those two bits to the left, and returns a char with
** this new binary representation */
unsigned char rotate_right(unsigned char a) {

	unsigned char result;
	unsigned char y = 0x03;	/* mask value to extract right 2 bits */

	/* records the right 2 bits, shifts param a right by 2 bits, shifts the right bits left 
	** by 6, and combines the bits using OR */
	result = (a >> 2) | ((a & y) << 6);

	return result;
}

/* removes the left two bits of a, appends those two bits to the right, and returns a char with
** this new binary representation */
unsigned char rotate_left(unsigned char a) {

	unsigned char result;
	unsigned char y = 0xc0;	/* mask value to extract left 2 bits */

	/* records the left 2 bits, shifts param a left by 2 bits, shifts the left bits right 
	** by 6, and combines the bits using OR */
	result = (a << 2) | ((a & y) >> 6);

	return result;
}

/* takes each char in clearText, encrypts it accordingly using the key, and loads the encrypted
** chars into encryptText */
void encrypt (unsigned char *clearText, unsigned char *encryptText, unsigned char key) {

	unsigned char temp;
	
	int i = 0;

	/* encrypts each char until null character is detected */
	while (clearText[i] != '\0') {
		temp = clearText[i] ^ key;	/* performs XOR with the character and key */

		/* If the index is even (1st, 3rd, 5th..... positions), bits are rotated 
		** right, otherwise bits are rotated left */
		if (i % 2 == 0) {
			temp = rotate_left(temp);
		} else {
			temp = rotate_right(temp);
		}

		encryptText[i] = temp; /* loads encrypted char into encrypText */
		i++;
	}	
	
	encryptText[i] = '\0';
}

