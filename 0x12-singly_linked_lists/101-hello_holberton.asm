section .data	;data section
	msg db "Hello, Holberton",0xa
	
section .text ;text session
	global _start
_start:
	mov rax, 1 		;edx, ecx, ebx, eax are registers
	mov rdi, 1
	mov rsi, msg		;1 and 4 are system call
	mov rdx, 13
	syscall			;to call the kernel

	mov rax, 60
	mov rdi, 0
	syscall
