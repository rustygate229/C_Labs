# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "printlines.s"
.section .rodata

RESULTS:
	.string "Results for entry %d:\n"
R_1:
	.string "(%d) + (%d) = (%ld)\n"
R_2:
	.string "(%d) - (%d) = (%ld)\n"
R_3:
	.string "(%d) * (%d) = (%ld)\n"
R_4:
	.string "(%d) / (%d) = (%d), (%d)\n"


.data
.globl printlines
	.type printlines, @function
.text

printlines:
	# stack management
	pushq %rbp
	movq %rsp, %rbp

	movq $1, %r10 # i variable

	loop:
	
		# First print statement

		# save necessary register
		pushq %rdi
		pushq %rsi
		pushq %r10

		movq $0, %rax 		# Must be 0 by convention
		movq $RESULTS, %rdi	# Load prompt into 1st parameter
		movq %r10, %rsi		# Load i into 2nd parameter

		call printf

		popq %r10
		popq %rsi
		popq %rdi


		incl %r10d # increment i

		# Summation print statement
		# save necessary registers
		pushq %rdi
		pushq %rsi
		pushq %r10

		movq $0, %rax	# Must be 0 by convention

		# Load value1 into second parameter
		leaq 4(%rdi), %r11
		movslq (%r11), %rsi	

		# Load value2 into third parameter
		leaq (%rdi), %r11
		movslq (%r11), %rdx

		# Load sum into fourth parameter
		leaq 20(%rdi), %r11
		movq (%r11), %rcx

		# Load prompt into first parameter
		movq $R_1, %rdi

		call printf

		popq %r10
		popq %rsi
		popq %rdi


		# Difference print statement
		# save necessary registers
		pushq %rdi
		pushq %rsi
		pushq %r10

		movq $0, %rax	# Must be 0 by convention

		# Load value1 into second parameter
		leaq 4(%rdi), %r11
		movslq (%r11), %rsi

		# Load value2 into third parameter
		leaq (%rdi), %r11
		movslq (%r11), %rdx
	
		# Load difference into fourth parameter
		leaq 8(%rdi), %r11
		movq (%r11), %rcx

		movq $R_2, %rdi # Load prompt into first

		call printf

		popq %r10
		popq %rsi
		popq %rdi


		# Multiplication print statement
		# save necessary registers
		pushq %rdi
		pushq %rsi
		pushq %r10

		movq $0, %rax	# Must be 0 by convention

		# Load value1 into second parameter
		leaq 4(%rdi), %r11
		movslq (%r11), %rsi

		# Load value2 into third parameter
		leaq (%rdi), %r11
		movslq (%r11), %rdx

		# Load product into fourth parameter
		leaq 32(%rdi), %r11
		movq (%r11), %rcx

		movq $R_3, %rdi # Load prompt into first parameter

		call printf

		popq %r10
		popq %rsi
		popq %rdi

		# Division print statement
		# save necessary registers
		pushq %rdi
		pushq %rsi
		pushq %r10

		movq $0, %rax	# Must be 0 by convention

		# Load value1 into second parameter
		leaq 4(%rdi), %r11
		movslq (%r11), %rsi

		# Load value2 into third parameter
		leaq (%rdi), %r11
		movslq (%r11), %rdx

		# Load quotient into fourth parameter
		leaq 16(%rdi), %r11
		movq (%r11), %rcx

		# Load remainder into fifth parameter
		leaq 28(%rdi), %r11
		movq (%r11), %r8

		movq $R_4, %rdi # Load prompt into 1st parameter

		call printf

		popq %r10
		popq %rsi
		popq %rdi

		# Move onto next struct
		leaq 40(%rdi), %rdi
		decl %esi

		# If not at the end, keep going
		cmpl $0, %esi
		jne loop
	
	leave
	ret
.size printlines, .-printlines
	
