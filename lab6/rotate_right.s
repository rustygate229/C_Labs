# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "rotate_right.s"
.section .rodata
.data
.globl rotate_right
	.type rotate_right, @function

.text
rotate_right:
	
	# stack management
	pushq %rbp
	movq %rsp, %rbp

	# Copy the value in first parameter into c register for temp use
	movb %dil, %cl

	shrb $2, %dil # Logical right shift by 2 bits
	salb $6, %cl # Left shift by 6 bits

	orb %dil, %cl # Use OR to combine values in both registers

	movb %cl, %al	# Load it into %al to return

	leave
	ret

.size rotate_right, .-rotate_right
	
