section .data
	hello db 'Hello, Holberton', 0

section .text
	global main

main:
	; Use write syscall to print the string
	mov rax, 1          ; syscall number for sys_write
	mov rdi, 1          ; file descriptor 1 is stdout
	mov rsi, hello      ; pointer to the string
	mov rdx, 18         ; length of the string
	syscall

	; Use exit syscall to exit the program
	mov rax, 60         ; syscall number for sys_exit
	xor rdi, rdi        ; status 0
	syscall

