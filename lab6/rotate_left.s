# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "rotate_left.s"
.section .rodata
.data
.globl rotate_left
	.type rotate_left, @function

.text
rotate_left:
	
	# stack management
	pushq %rbp
	movq %rsp, %rbp

	# Copy the value in first parameter into another register for temp use
	movb %dil, %cl

	salb $2, %dil	# Left shift by 2 bits
	shrb $6, %cl	# Right shift by 6 bits

	orb %dil, %cl	# Combine values in both registers using OR

	movb %cl, %al	# Load resulting value to return

	leave
	ret

.size rotate_left, .-rotate_left
	
