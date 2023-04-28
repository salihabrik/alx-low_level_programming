	bits 64
	extern	printf
	global main

    section .data ; Data section
    message db  "Hello, Holberton!",10
    format db '%s', 10 , 0

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
	; function return
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
	section .data
message: db  "Hello, Holberton" ;10

