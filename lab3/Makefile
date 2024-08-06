# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
# TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY
# WITH RESPECT TO THIS ASSIGNMENT

## Name: Mayank Karnati

# compilation flags
gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all targets currently defined in the file
all: lab3.zip lab3

# this target is the zip file that submits to Carmen
lab3.zip: Makefile quotes.c populate_favs.c populate_quote.c save_data.c write_to_file.c input_quote.c output_quotes.c output_favs.c lab3.h lab3Readme
	zip lab3.zip Makefile quotes.c populate_favs.c populate_quote.c save_data.c write_to_file.c input_quote.c output_quotes.c output_favs.c lab3.h lab3Readme

# the lab3 target is for the lab3 executable
lab3: quotes.o populate_favs.o populate_quote.o save_data.o write_to_file.o input_quote.o output_quotes.o output_favs.o 
	gcc quotes.o populate_favs.o populate_quote.o save_data.o write_to_file.o input_quote.o output_quotes.o output_favs.o -o lab3

# this target is the dependency for quotes.o
# the quotes.o target gets recreated if quotes.c has changed
quotes.o: quotes.c lab3.h
	gcc $(gcc_opt) quotes.c

# this target is the dependency for populate_favs.o
# the populate_favs.o target gets recreated if populate_favs.c has changed
populate_favs.o: populate_favs.c lab3.h
	gcc $(gcc_opt) populate_favs.c

# this target is the dependency for populate_quote.o
# the populate_quote.o target gets recreated if populate_quote.c has changed
populate_quote.o: populate_quote.c input_quote.c lab3.h
	gcc $(gcc_opt) populate_quote.c input_quote.c

# this target is the dependency for save_data.o
# the save_data.o target gets recreated if save_data.c has changed
save_data.o: save_data.c lab3.h
	gcc $(gcc_opt) save_data.c write_to_file.c

# this target is the dependency for write_to_file.o
# the write_to_file.o target gets recreated if write_to_file.c has changed
write_to_file.o: write_to_file.c lab3.h
	gcc $(gcc_opt) write_to_file.c

# this target is the dependency for input_quote.o
# the input_quote.o target gets recreated if input_quote.c has changed
input_quote.o: input_quote.c lab3.h
	gcc $(gcc_opt) input_quote.c

# this target is the dependency for output_quotes.o
# the output_quotes.o target gets recreated if output_quotes.c has changed
output_quotes.o: output_quotes.c lab3.h
	gcc $(gcc_opt) output_quotes.c

# this target is the dependency for output_favs.o
# the output_favs.o target gets recreated if output_favs.c has changed
output_favs.o: output_favs.c lab3.h
	gcc $(gcc_opt) output_favs.c

# this target clears the directory of all .o file, lab3 executable, and lab3.zip file
clean:
	rm -rf *.o lab3 lab3.zip

