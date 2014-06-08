	.file	"1_5_1.c"
	.local	i
	.comm	i,4,4
	.section	.rodata
.LC0:
	.string	"!"
	.text
.globl func1
	.type	func1, @function
func1:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	$2, (%eax)
	jmp	.L2
.L3:
	movl	$.LC0, (%esp)
	call	puts
	movl	$3, (%esp)
	call	sleep
.L2:
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	cmpl	$1, %eax
	jne	.L3
	movl	$0, %eax
	leave
	ret
	.size	func1, .-func1
	.section	.rodata
.LC1:
	.string	"1231132312"
	.text
.globl do_other
	.type	do_other, @function
do_other:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$.LC1, (%esp)
	call	puts
	leave
	ret
	.size	do_other, .-do_other
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$2, 28(%esp)
	movl	$func1, %eax
	leal	28(%esp), %edx
	movl	%edx, 12(%esp)
	movl	%eax, 8(%esp)
	movl	$0, 4(%esp)
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	pthread_create
	movl	$1, 28(%esp)
	call	do_other
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-4)"
	.section	.note.GNU-stack,"",@progbits
