section .text
    global _ft_strcpy
_ft_strcpy:
    mov rdx,rdi
loop:
    cmp byte[rsi],0
    je return
    mov al,byte[rsi]
    mov byte[rdi],al
    inc rdi
    inc rsi
    jmp loop
return:
    mov byte[rdi],0
    mov rax,rdx
    ret