# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

# compilation flags
gcc_Copt = -std=c99 -pedantic -g -Wimplicit-function-declaration -Wreturn-type -Wformat -c
gcc_Sopt = -lc -m64 -c -g

all:lab6.zip bit_encode

lab6.zip: bit_encode.c create_key.s rotate_right.s rotate_left.s Makefile lab6Readme
	zip lab6.zip bit_encode.c create_key.s rotate_right.s rotate_left.s Makefile lab6Readme

bit_encode: bit_encode.o create_key.o rotate_right.o rotate_left.o
	gcc bit_encode.o create_key.o rotate_right.o rotate_left.o -o bit_encode

bit_encode.o: bit_encode.c
	gcc $(gcc_Copt) bit_encode.c

create_key.o: create_key.s
	gcc $(gcc_Sopt) create_key.s

rotate_right.o: rotate_right.s
	gcc $(gcc_Sopt) rotate_right.s

rotate_left.o: rotate_left.s
	gcc $(gcc_Sopt) rotate_left.s

clean:
	rm -rf *.o bit_encode lab6.zip


