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

<<<<<<< HEAD
section .data	;data section
	msg db "Hello, Holberton", 10	;msg is message
	len equ $ -msg			;db: defined bytes
=======
	mov rax, 60
	mov rdi, 0
	syscall
>>>>>>> fc99dbb824ff400be498e2e15a31699b50f444d9
