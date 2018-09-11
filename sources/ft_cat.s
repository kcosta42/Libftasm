%define MACH_SYSCALL(nb)	0x2000000 | nb
%define SYS_READ			3
%define SYS_WRITE			4
%define STDOUT				1
%define BUFFER_SIZE			1024

section .bss
	buffer: resb 1024

section .text
	global _ft_cat

_ft_cat:
	mov rax, 0xffffffff
	cmp rdi, rax
	je return

	mov r13, rdi
	lea r14, [rel buffer]

	read_write:
		mov rdi, r13
		mov rsi, r14
		mov rdx, BUFFER_SIZE
		mov rax, MACH_SYSCALL(SYS_READ)
		syscall

		cmp rax, 0x0
		je return

		mov rdx, rax
		mov rdi, STDOUT
		mov rsi, r14
		mov rax, MACH_SYSCALL(SYS_WRITE)
		syscall

		jmp read_write

	return:
		ret
