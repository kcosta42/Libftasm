%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				4
%define STDOUT				1

section .text
	global _ft_putchar

_ft_putchar:
	lea rsi, [rel rdi]
	mov rdi, STDOUT
	mov rdx, 1
	mov rax, MACH_SYSCALL(WRITE)
	syscall

	ret
