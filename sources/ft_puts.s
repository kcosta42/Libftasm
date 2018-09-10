%define MACH_SYSCALL(nb) 0x2000000 | nb
%define WRITE	4
%define STDOUT	1

section .data
nullstr:
	.string db "(null)"
	.len equ $ - nullstr.string
	.nl db 10

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:

	cmp rdi, 0
	jz null_str

	push rdi
	call _ft_strlen
	pop rdi

	mov rdx, rax
	lea rsi, [rel rdi]
	mov rdi, STDOUT
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jmp ret

	null_str:
		mov rdi, STDOUT
		lea rsi, [rel nullstr.string]
		mov rdx, nullstr.len
		mov rax, MACH_SYSCALL(WRITE)
		syscall

	ret:
		mov rdi, STDOUT
		lea rsi, [rel nullstr.nl]
		mov rdx, 1
		mov rax, MACH_SYSCALL(WRITE)
		syscall

		mov rax, 10
		ret
