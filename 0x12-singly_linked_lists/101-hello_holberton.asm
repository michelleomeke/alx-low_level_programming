section .data ; Data section, initialized variables
    msg db "Hello, Holberton", 0 ; C string needs 0
    fmt db "%s", 10, 0 ; The printf format, "\n", '0'

section .text ; Code section.
    global _start ; the standard entry point for Linux ELF executables

_start: ; the program label for the entry point
    ; set up stack frame, must be aligned
    push rbp
    mov rbp, rsp

    ; Call C function printf
    mov rdi, fmt ; first argument: format string
    mov rsi, msg ; second argument: message string
    xor rax, rax ; clear rax register
    call printf ; Call C function

    ; restore stack frame
    mov rsp, rbp
    pop rbp

    ; exit program with return value 0
    mov rax, 60 ; system call for exit
    xor rdi, rdi ; clear rdi register (exit status code)
    syscall ; call kernel to exit program
