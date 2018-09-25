%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define STDOUT				1

section .bss
	buffer: resb 2

section .text
	global _ft_putchar

_ft_putchar:
	push r14

	lea r14, [rel buffer]
	mov [r14], rdi
	mov byte [r14 + 1], 0

	mov rdi, STDOUT
	lea rsi, [rel r14]
	mov rdx, 1
	mov rax, MACH_SYSCALL(WRITE)
	syscall

	pop r14
	ret
