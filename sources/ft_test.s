%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

section .data
index: db 1
hello:
	.string db "Hello World!", 10
	.len equ $ - hello.string

section .text
	global start
	global _main

ft_memset:
	xor rcx, rcx
	loop_start:
		mov rax, [rdi + rcx]
		inc rcx
		cmp rcx, rdx
		jne loop_start
	ret

start:
	call _main
	ret

_main:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov rdi, STDOUT
	lea rsi, [rel hello.string]
	mov rdx, hello.len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rdi, [rel hello.string]
	mov rsi, 0
	mov rdx, hello.len
	call ft_memset
	mov rdi, STDOUT
	lea rsi, [rel hello.string]
	mov rdx, hello.len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	leave
	ret
