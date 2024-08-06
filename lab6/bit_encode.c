#include <stdio.h>
#include <string.h>
unsigned char rotate_right(unsigned char value);
unsigned char rotate_left(unsigned char value);
unsigned int create_key();

int main()
{
char 	      cleartext_in[500];
unsigned char ciphertext[500];
int  	      i, ofst, col, length;
unsigned int cur_in, key;

    printf("enter cleartext: ");
    scanf(" %[^\n]", cleartext_in);
    length = strlen(cleartext_in);
    printf("%s\n", cleartext_in);

    printf("hex encoding:\n\t");
    col  = 0;
    for ( ofst = 0; ofst < length; ofst++ )
    {
	if ( col == 10 )
	{
	    printf("\n\t");
	    col = 0;
	}
	printf("%.2X ", (unsigned int)cleartext_in[ofst]);
	col++;
    }
    printf("\n");
    key = create_key();
    for ( ofst = 0; ofst < length; ofst++ )
    {
	if(ofst%2){	/* if index is odd	 2nd, 4th, etc values*/
		ciphertext[ofst] = rotate_right(cleartext_in[ofst]^key);
	}
	else {		/* index is even	1st, 3rd, etc values*/
		ciphertext[ofst] = rotate_left(cleartext_in[ofst]^key);
	}
    }

    col = 0;
    printf("hex ciphertext:\n\t");
    for ( ofst = 0; ofst < length; ofst++ )
    {
	if ( col == 10 )
	{
	    printf("\n\t");
	    col = 0;
	}
	printf("%.2X ", (unsigned int)ciphertext[ofst]);
	col++;
    }
    printf("\n");

return(0);
}

