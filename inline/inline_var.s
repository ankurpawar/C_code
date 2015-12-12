	.file	"inline_var.c"
	.text
	.globl	func
	.type	func, @function
func:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	avar.2179(%rip), %eax
	addl	$1, %eax
	movl	%eax, avar.2179(%rip)
	movl	avar.2179(%rip), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	func, .-func
	.globl	foo
	.type	foo, @function
foo:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	baz.2182(%rip), %eax
	addl	$2, %eax
	movl	%eax, baz.2182(%rip)
	movl	baz.2182(%rip), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	foo, .-foo
	.section	.rodata
.LC0:
	.string	"z = %d\n"
.LC1:
	.string	"%d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	avar.2179(%rip), %eax
	addl	$1, %eax
	movl	%eax, avar.2179(%rip)
	movl	avar.2179(%rip), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	call	foo
	movl	$0, %eax
	call	foo
	movl	$0, %eax
	call	foo
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.local	avar.2179
	.comm	avar.2179,4,4
	.data
	.align 4
	.type	baz.2182, @object
	.size	baz.2182, 4
baz.2182:
	.long	5
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
