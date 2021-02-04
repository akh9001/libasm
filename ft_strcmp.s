section .text
	global _ft_strcmp
_ft_strcmp:
	xor rax, rax
loop:
	cmp byte [rdi + rax], 0
	je test
	jmp continu
continu:
	mov cl,  byte [rsi + rax]
	cmp byte [rdi + rax], cl
	jne khroj
	inc rax
	jmp loop
test:
	cmp byte [rsi + rax], 0
	je khroj
	jmp continu
khroj:
	xor r8, r8
	xor r9, r9
	mov r8b, byte[rdi + rax]
	mov r9b, byte [rsi + rax]
	sub r8, r9
	xor rax, rax
	mov rax, r8
	ret

