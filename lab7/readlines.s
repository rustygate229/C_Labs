# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "readlines.s"
.section .rodata

SC_1:
	.string "%d %d"

.data
.globl readlines
	.type readlines, @function
.text

readlines:
	
	# stack management
	pushq %rbp
	movq %rsp, %rbp

	loop:	
		# Save the 3 parameter values
		pushq %rdi
		pushq %rsi
		pushq %rdx

		movq $0, %rax # Must be 0 before calling fscanf

		# %rdi already holds file pointer
		
		leaq 4(%rsi), %rdx # load value1 into 3rd parameter
		leaq (%rsi), %rcx # load value2 into 4th parameter
		movq $SC_1, %rsi # load string into 2nd parameter

		call fscanf

		# Restore parameter values
		popq %rdx
		popq %rsi
		popq %rdi


		leaq 40(%rsi), %rsi # Move to next struct
		decl %edx # Decrement count

		# If count isn't 0, repeat loop
		cmpl $0, %edx
		jne loop

	leave
	ret

.size readlines, .-readlines
	
