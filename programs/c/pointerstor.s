	.file	"pointerstor.c"
	.globl	p
	.section	.rodata
.LC0:
	.string	"hello"
	.data
	.align 8
	.type	p, @object
	.size	p, 8
p:
	.quad	.LC0
	.section	.rodata
.LC1:
	.string	"data"
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
	subq	$16, %rsp
	movq	$.LC1, -8(%rbp)
	movq	p(%rip), %rax
	movq	%rax, %rdi
	call	puts
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
