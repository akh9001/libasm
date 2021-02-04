section .text
	global _ft_strcmp
_ft_strcmp:
			xor rax, rax
			xor rcx, rcx
			xor rdx, rdx
loop:
			mov dl, byte [rsi + rax]
			mov cl, byte [rdi + rax]
			cmp cl, 0
			je khroj
			cmp dl, 0
			je khroj
			cmp dl, cl
			jne khroj
			inc rax
			jmp loop
khroj:
			sub 	cl, dl
			movsx rax, cl
			ret
