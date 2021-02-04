section .text
	global _ft_read
_ft_read:
			mov rax, 0x2000003
			syscall
			jc khroj
			ret
			
khroj:
	push rax
	extern ___error
	call ___error
	pop r8
	mov [rax], r8
	mov rax, -1
	ret
