# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "compute.s"
.section .rodata

.data
.globl compute
	.type compute, @function
.text

compute:
	pushq %rbp
	movq %rsp, %rbp

	loop:

		# populate sum
		leaq 4(%rdi), %r10	# calculate address of value1
		movslq (%r10), %r10 	# store value of value1

		leaq (%rdi), %r11
		movslq (%r11), %r11	# stores value of value2

		addq %r11, %r10 # %r10 stores the result of the addition

		leaq 20(%rdi), %r11	# calculate position of sum in struct
		movq %r10, (%r11)	# write result to address
		
		# populate difference
		leaq 4(%rdi), %r10
		movslq (%r10), %r10	# store value of value1

		leaq (%rdi), %r11
		movslq (%r11), %r11	# store value of value2

		subq %r11, %r10 # %r10 stores the result of the subtract

		leaq 8(%rdi), %r11	# calculate position of difference
		movq %r10, (%r11)	# write result to address

		# populate product
		leaq 4(%rdi), %r10
		movslq (%r10), %r10	# store value1

		leaq (%rdi), %r11
		movslq (%r11), %r11	# store value2

		imulq %r11, %r10 # %r10 stores the result of the multiplication

		leaq 32(%rdi), %r11	# calculate address of product
		movq %r10, (%r11)	# write result to address

		#populate quotient and remainder
		leaq 4(%rdi), %rax
		movslq (%rax), %rax	# store value1 in dividend

		cqto	# make rdx all 1s or 0s

		leaq (%rdi), %r10
		movslq (%r10), %r10	# store value2

		idivq %r10	# divide value1 / value2

		leaq 28(%rdi), %r11 # calculate address of remainder
		movl %edx, (%r11)	# write remainder to address

		leaq 16(%rdi), %r11	# calculate address of quotient
		movl %eax, (%r11)	# write quotient to address

		# Move onto next struct
		leaq 40(%rdi), %rdi
		decl %esi

		# If not at the end, keep going
		cmpl $0, %esi
		jne loop

	leave
	ret
.size compute, .-compute
	
