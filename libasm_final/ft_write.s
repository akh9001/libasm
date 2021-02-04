section .text
	global _ft_write
_ft_write:
	mov rax, 0x2000004
	syscall
	jnc khroj
	push rax
	extern ___error
	call ___error
	pop r8
	mov [rax], r8
	mov rax, -1
	
khroj:
	ret
