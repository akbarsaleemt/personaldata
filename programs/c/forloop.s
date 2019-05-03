	.file	"forloop.c"
	.section	.rodata
.LC1:
	.string	"t1=%f\n"
.LC2:
	.string	"t2=%f\n"
.LC3:
	.string	"t3=%f\n"
.LC4:
	.string	"t4=%f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	$10, -28(%rbp)
	call	clock
	movq	%rax, -24(%rbp)
	movl	$0, -32(%rbp)
	jmp	.L2
.L3:
	addl	$1, -32(%rbp)
.L2:
	movl	-32(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L3
	call	clock
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	subq	-24(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC0(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	movl	$.LC1, %edi
	movl	$1, %eax
	call	printf
	call	clock
	movq	%rax, -24(%rbp)
	movl	-28(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
	jmp	.L4
.L5:
	subl	$1, -32(%rbp)
.L4:
	cmpl	$0, -32(%rbp)
	jns	.L5
	call	clock
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	subq	-24(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC0(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	call	clock
	movq	%rax, -24(%rbp)
	movl	-28(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
	jmp	.L6
.L7:
	subl	$1, -32(%rbp)
.L6:
	cmpl	$0, -32(%rbp)
	jns	.L7
	call	clock
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	subq	-24(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC0(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	movl	$.LC3, %edi
	3,
	call	printf
	call	clock
	movq	%rax, -24(%rbp)
	movl	$0, -32(%rbp)
	jmp	.L8
.L9:
	addl	$1, -32(%rbp)
.L8:
	movl	-32(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L9
	call	clock
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	subq	-24(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC0(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	movl	$.LC4, %edi
	movl	$1, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1093567616
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
