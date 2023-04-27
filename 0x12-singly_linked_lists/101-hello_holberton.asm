	extern	printf	; the C function, to be called

    section .data ; Data section
    message db 'Hello, Holberton!', 0x0a, 0
    format db '%s', 0x0a, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    sub rsp, 8       ; reserve space for two 32-bit arguments
    mov dword [rsp], format ; first argument is the format string
    mov qword [rsp+4], message ; second argument is the message string
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

