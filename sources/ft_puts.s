%define MACH_SYSCALL(nb) 0x2000000 | nb
%define WRITE		4
%define STDOUT		1

section .text
	global _ft_puts

_ft_puts:
	mov rsi, rdi
	mov rdi, STDOUT
	mov rax MACH_SYSCALL(WRITE)
