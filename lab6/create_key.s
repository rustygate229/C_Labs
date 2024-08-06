# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "create_key.s"
.section .rodata

PR_1:
	.string "Please enter the 4-bit key: " # Prompt for key
.data
.globl create_key
	.type create_key, @function
.text
create_key:
	
	# stack management
	pushq %rbp
	movq %rsp, %rbp

	# call printf
	movq $PR_1, %rdi 	# pass string into 1st parameter
	movq $0, %rax		# required value in %rax says Linux System V ABI
	call printf
	
	# not pushing any caller saved registers because
	# no saved data exists in them
	call getchar # clear \n char from input stream

	movl $0, %r10d	# r10 is i, the loop counter
	movl $0, %r11d	# stores key
	loop:

		# %r10 and %r11 have saved data
		# they must be saved
		pushq %r10
		pushq %r11

		call getchar

		# pop values to restore them
		popq %r11
		popq %r10

		cmpl $0x30, %eax # if the value entered was '0'
		jne else

		sall $1, %r11d # left shift 1 bit

		jmp Done
		else: # if the value entered was '1'

		sall $1, %r11d	# left shift 1 bit
		orl $0x11, %r11d	# load 1 into the key

		Done:

		incl %r10d	# increment loop counter
		
		# if the loop counter isn't 4, repeat loop
		cmpl $4, %r10d
		jne loop	
		
	movl %r11d, %eax # load return value into %eax [4 byte register]

	leave
	ret

.size create_key, .-create_key
	
