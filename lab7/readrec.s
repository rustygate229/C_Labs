# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

.file "readrec.s"
.section .rodata

ER_1:
	.string "Usage: %s count filename\n"

PER:
	.string "r"

.data
.globl main
	.type main, @function
.text

main:
	#stack management
	pushq %rbp
	movq %rsp, %rbp

	# if argc is 3
	cmpq $3, %rdi
	je Done

	# Save values of %rdi and %rsi on the stack
	pushq %rdi
	pushq %rsi

	movq $0, %rax	# required value %rax says Linux System V ABI
	movq $ER_1, %rdi	# Load %rdi with string
	movq (%rsi), %rsi	# %rsi already holds address for argv[0]

	call printf

	# restore %rsi and %rdi
	popq %rsi
	popq %rdi

	leave
	ret

	Done:


	# Save values of %rdi and %rsi on the stack
	pushq %rdi
	pushq %rsi

	movl $1, %r10d	# holds temporary variable for address calc

	leaq (%rsi, %r10, 8), %rdi
	movq (%rdi), %rdi 	

	call atoi # count in %rax

	# restore %rsi, %rdi
	popq %rsi
	popq %rdi

	# Allocate space for array of structures
	movq %rax, %r11		# %rax holds count, %r11 is used for temporary calculation
	imulq $40, %r11 	# calculate amount of bytes to allocate 
	subq %r11, %rsp
	leaq (%rsp), %rcx	# %rcx holds value of $R_values

	# Open file
	pushq %rdi	
	pushq %rsi
	pushq %rax
	pushq %rcx

	movl $2, %r10d	# holds temporary variable for address calc

	leaq (%rsi, %r10, 8), %rdi
	movq (%rdi), %rdi # %rdi holds argv[2]
	movq $PER, %rsi # %rsi holds permission string

	call fopen
	movq %rax, %rdx # %rdx holds fp

	popq %rcx
	popq %rax
	popq %rsi
	popq %rdi


	# call readlines
	pushq %rdi	
	pushq %rsi
	pushq %rax
	pushq %rcx
	pushq %rdx

	movq %rdx, %rdi # fp
	movq %rcx, %rsi # R_values
	movq %rax, %rdx # count
	call readlines

	popq %rdx
	popq %rcx
	popq %rax
	popq %rsi
	popq %rdi
	


	# call fclose
	pushq %rdi	
	pushq %rsi
	pushq %rax
	pushq %rcx
	pushq %rdx

	movq %rdx, %rdi # fp
	call fclose

	popq %rdx
	popq %rcx
	popq %rax
	popq %rsi
	popq %rdi


	# call compute
	pushq %rdi	
	pushq %rsi
	pushq %rax
	pushq %rcx
	pushq %rdx

	movq %rcx, %rdi # R_values
	movq %rax, %rsi # count
	call compute

	popq %rdx
	popq %rcx
	popq %rax
	popq %rsi
	popq %rdi

	# call printlines
	pushq %rdi	
	pushq %rsi
	pushq %rax
	pushq %rcx
	pushq %rdx

	movq %rcx, %rdi # R_values
	movq %rax, %rsi # count
	call printlines

	popq %rdx
	popq %rcx
	popq %rax
	popq %rsi
	popq %rdi
	

	#stack cleanup and return
	movq $0, %rax
	leave
	ret	

.size main, .-main
	
