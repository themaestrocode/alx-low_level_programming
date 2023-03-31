section .data
	msg db 'Hello, Holberton', 0Ah	; the string to print
	format db '%s', 0Ah		; the format string for printf

section .text
	global main

main:
	push rbp			; save the base pointer
	mov rbp, rsp			; set the base pointer to the current stack pointer

	lea rdi, [msg]			; load the address of the hello string into rdi
	lea rsi, [format]		; load the address of the format string into rsi
	mov eax, 0			; set eax to 0
	call printf			; call the printf function

	mov rsp, rbp			; restore the stack pointer
	pop rbp				; restore the base pointer
	xor eax, eax			; set the return value to 0
	ret				; return to the operating system
