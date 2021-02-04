section .text
	global _ft_strcpy
_ft_strcpy: 
	mov rbx, -1
	mov rax, rdi
loop:
	inc rbx
	mov cl, [rsi + rbx]
	mov [rdi + rbx], cl
	cmp byte [rsi + rbx], 0
	jne loop
khroj:
	ret
