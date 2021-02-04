section .text
	global _ft_strcpy
_ft_strcpy:
			mov rax, rdi
			mov bl, [rsi]
			mov [rdi], bl
			cmp byte [rsi], 0
			je khroj

loop:
		inc rdi
		inc rsi
		mov bl, [rsi]
		mov [rdi], bl
		cmp byte [rsi], 0
		jne loop
		ret
khroj:
		ret
