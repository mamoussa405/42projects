section .text
    global _ft_strcmp
_ft_strcmp:
loop:
    cmp byte[rdi],0
    je return
    cmp byte[rsi],0
    je return
    mov dl,byte[rsi]
    cmp byte[rdi],dl
    je befor_loop
    jmp return
befor_loop:
    inc rdi
    inc rsi
    jmp loop
return:
    movzx rax,byte[rsi]
    movzx rdx,byte[rdi]
    sub rdx,rax
    mov rax,rdx
    ret 