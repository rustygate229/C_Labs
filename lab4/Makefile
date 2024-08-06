# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
# TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY
# WITH RESPECT TO THIS ASSIGNMENT

## Name: Mayank Karnati

# compilation flags
gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all targets currently defined in the file
all: lab4 lab4.zip

# this the target for creating the lab4 executable
lab4: lab4.h lab4main.o insert_node.o delete_node.o get_data_for_node.o generate_key.o read_quote_data.o print_quotes.o traverse_to_point.o read_option.o authors_in_list.o print_authors.o print_quotes_author.o print_quotes_date.o contains_author.o insert_author.o traverse_to_author.o execute_option.o add_quote.o delete_quote.o save_to_file.o free_nodes.o split_quote.o free_authors.o
	gcc lab4main.o insert_node.o get_data_for_node.o generate_key.o read_quote_data.o print_quotes.o delete_node.o traverse_to_point.o read_option.o authors_in_list.o print_authors.o print_quotes_author.o print_quotes_date.o contains_author.o insert_author.o traverse_to_author.o execute_option.o add_quote.o delete_quote.o save_to_file.o free_nodes.o split_quote.o free_authors.o -o lab4

# this is the target for creating the zip file
lab4.zip: lab4main.c insert_node.c delete_node.c get_data_for_node.c generate_key.c read_quote_data.c print_quotes.c traverse_to_point.c read_option.c authors_in_list.c print_authors.c print_quotes_author.c print_quotes_date.c contains_author.c insert_author.c traverse_to_author.c execute_option.c add_quote.c delete_quote.c save_to_file.c free_nodes.c split_quote.c free_authors.c Makefile lab4Readme lab4.h Quotes.lab4

	zip lab4.zip lab4main.c insert_node.c delete_node.c get_data_for_node.c generate_key.c read_quote_data.c print_quotes.c traverse_to_point.c read_option.c authors_in_list.c print_authors.c print_quotes_author.c print_quotes_date.c contains_author.c insert_author.c traverse_to_author.c execute_option.c add_quote.c delete_quote.c save_to_file.c free_nodes.c split_quote.c free_authors.c Makefile lab4Readme lab4.h Quotes.lab4

# The following targets are meant to compile/link each code file

lab4main.o: lab4main.c 
	gcc $(gcc_opt) lab4main.c

read_quote_data.o: read_quote_data.c lab4.h
	gcc $(gcc_opt) read_quote_data.c

insert_node.o: insert_node.c lab4.h
	gcc $(gcc_opt) insert_node.c 

delete_node.o: delete_node.c lab4.h
	gcc $(gcc_opt) delete_node.c

get_data_for_node.o: get_data_for_node.c lab4.h
	gcc $(gcc_opt) get_data_for_node.c

generate_key.o: generate_key.c lab4.h
	gcc $(gcc_opt) generate_key.c

print_quotes.o: print_quotes.c lab4.h
	gcc $(gcc_opt) print_quotes.c

traverse_to_point.o: traverse_to_point.c lab4.h
	gcc $(gcc_opt) traverse_to_point.c

read_option.o: read_option.c lab4.h
	gcc $(gcc_opt) read_option.c

authors_in_list.o: authors_in_list.c lab4.h
	gcc $(gcc_opt) authors_in_list.c

print_authors.o: print_authors.c lab4.h
	gcc $(gcc_opt) print_authors.c

print_quotes_author.o: print_quotes_author.c lab4.h
	gcc $(gcc_opt) print_quotes_author.c

print_quotes_date.o: print_quotes_date.c lab4.h
	gcc $(gcc_opt) print_quotes_date.c

contains_author.o: contains_author.c lab4.h
	gcc $(gcc_opt) contains_author.c

insert_author.o: insert_author.c lab4.h
	gcc $(gcc_opt) insert_author.c

traverse_to_author.o: traverse_to_author.c lab4.h
	gcc $(gcc_opt) traverse_to_author.c

execute_option.o: execute_option.c lab4.h
	gcc $(gcc_opt) execute_option.c

add_quote.o: add_quote.c lab4.h
	gcc $(gcc_opt) add_quote.c

delete_quote.o: delete_quote.c lab4.h
	gcc $(gcc_opt) delete_quote.c

save_to_file.o: save_to_file.c lab4.h
	gcc $(gcc_opt) save_to_file.c

free_nodes.o: free_nodes.c lab4.h
	gcc $(gcc_opt) free_nodes.c

split_quote.o: split_quote.c lab4.h
	gcc $(gcc_opt) split_quote.c

free_authors.o: free_authors.c lab4.h
	gcc $(gcc_opt) free_authors.c

# this target clears the directory of all .o file, lab4 executable, and lab4.zip file
clean:
	rm -rf *.o lab4 lab4.zip

