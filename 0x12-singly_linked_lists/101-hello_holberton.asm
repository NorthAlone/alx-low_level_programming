SECTION .data
msg:	db "Hello, Holberton\n", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main, _start
main:
_start:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov ebx, 0
	
