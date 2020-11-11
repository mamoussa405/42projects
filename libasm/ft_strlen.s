section .text
    global _ft_strlen
_ft_strlen:
    mov rcx,0
loop:
    cmp byte[rdi],0
    je return
    inc rcx
    inc rdi
    jmp loop
return:
    mov rax,rcx
    ret