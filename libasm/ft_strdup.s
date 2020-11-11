section .text
    global _ft_strdup
_ft_strdup:
    ;mov  rsi, rdi
    push rsi
    extern _ft_strlen
    call _ft_strlen
    add rax,1
    mov rdi,rax
    extern _malloc
    call _malloc
    pop rsi
    ;mov rsi,rdi
    ;mov rdi,rax
    ;extern _ft_strcpy
    ;call _ft_strcpy
    ret
