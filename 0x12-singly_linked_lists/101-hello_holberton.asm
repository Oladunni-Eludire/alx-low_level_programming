extern printf

	global main

main:
	mov rax, 0
	mov rdi, format
	mov rsi,msg
	mov rdx, message_len
	call printf

	mov rax, 0
	ret
format: db `Hello, Holberton\n`,0
