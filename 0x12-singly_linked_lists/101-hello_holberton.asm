section .data	;data section
	msg db "Hello, Holberton",0xa
	
section .text ;text session
	global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	int 0x080	;to call the kernel

	mov eax, 60
	mov rdi, 0
	int 0x080
