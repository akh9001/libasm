section .text
	global _ft_strcmp

_ft_strcmp:
	xor rax, rax
	xor rbx, rbx
loop:
	mov al, byte[rdi]
	mov bl, byte[rsi]
	cmp al, 0
	je khroj
	cmp bl, 0
	je khroj
	cmp al, bl
	jne khroj
	inc rdi
	inc rsi
	jmp loop 
khroj:
	sub rax, rbx
	ret