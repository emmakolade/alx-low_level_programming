section .data	;data section
	msg db "Hello, Holberton",0xa
	
section .text ;text session
	global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	syscall

	mov eax, 60
	mov rdi, 0
	syscall
