
		global _main
section .data
str:  db    "Hello, World!",10
.len: equ   $ - str
section .text

_main:
		mov rax, 0x2000004
		mov rdi, 1
		mov rsi, str
		mov rdx, str.len
		syscall

		mov rax, 0x2000001
		xor rdi, rdi
		syscall
