global  start

start:
        mov     rdi, 2
        extern  _malloc
        call    _malloc
        mov     byte[rax], 48
        mov     byte[rax + 1], 0
        mov     rdi, 1
        mov     rsi, rax
        mov     rdx, 2
        mov     rax, 0x2000004
        syscall

        mov     rax, 0x2000001
        mov     rdi, 0
        syscall