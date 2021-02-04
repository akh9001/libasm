extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error

section .text
	global _ft_strdup

_ft_strdup:
		push rdi
		call _ft_strlen
		inc rax
		mov rdi, rax
		call _malloc
		cmp rax, 0
		je khroj
		mov rdi, rax
		pop rsi
		call _ft_strcpy
		ret
khroj:

	call ___error
	mov dword [rax], 12
	mov rax, 0
	ret
