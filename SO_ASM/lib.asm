    section .text
    global imageFilAsm
    ;ASM is also self-documenting xD
imageFilAsm:
    push rbx
    push rsi
    vmovdqu ymm0, [rdi]
    vmovdqu ymm1, [rsi]
    VPMADDUBSW ymm2, ymm0, ymm1
    vmovdqu [rdx], ymm2
    mov rax, 0
    mov rbx, 0
loop:    add ax, WORD[rdx+rbx*2]
    inc rbx
    cmp rbx, 16
    jne loop
    mov rbx, 0
    mov dil, 0
    pop rsi
    loop1:    add dil, BYTE[rsi+rbx]
    inc rbx
    cmp rbx, 32
    jne loop1
    div dil
    mov ah, 0
    pop rbx
    ret