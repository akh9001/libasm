section .text
    global _ft_strcpy
_ft_strcpy:
            mov rax, rdi
            mov bl , [rsi]
            mov [rdi], bl
            cmp byte [rsi], 0
            je khroj
ft_strcpy:
            inc rdi
            inc rsi
            mov bl , [rsi]
            mov [rdi], bl
            cmp byte [rsi], 0
            jne ft_strcpy
            ret
khroj:
            ret
