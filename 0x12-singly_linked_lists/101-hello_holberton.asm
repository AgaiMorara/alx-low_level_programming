section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0   ; %s format for string, 10 is newline, 0 terminator

section .text
    global main
    extern printf
    extern exit

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    pop rbp

    xor rdi, rdi     ; Clear rdi to set exit status 0
    call exit
