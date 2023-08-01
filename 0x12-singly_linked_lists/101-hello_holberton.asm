extern    printf

section .text
	global     main

main:
	push rbp

	mov rax, 0
	mov rdi, format
	mov rsi,msg
	call printf

	pop rbp

	mov rax, 0
	ret

section .data
	msg: db `Hello, Holberton\n`,0
	format: db "%s", 10, 0

