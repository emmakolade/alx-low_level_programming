section .text ;text session
	global _start
_start:
	mov edx, len 	;edx, ecx, ebx, eax are registers
	mov ecx, msg
	mov ebx, 1	; 1 and 4 are system call
	mov eax, 4
	int 0x080	;to call the kernel

	mov eax, 1	;system call 1 (exit)
	int 0x080

section .data	;data section
	msg db "Hello, Holberton", 10	;msg is message you can also name it anytin
	len equ $ -msg			;db: defined bytes
					;10 also 0xa is the same as '\n'
