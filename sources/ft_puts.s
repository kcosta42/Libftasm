%define MACH_SYSCALL(nb) 0x2000000 | nb
%define WRITE		4
%define STDOUT		1

section .data
null:
	.string db "(null)", 10
	.len equ $ - null.string


section .text
	global _ft_puts

_ft_strlen:
	push rbx
	push rcx

	mov rbx, rdi
	xor rax, rax
	mov rcx, 0xffffffff

	repne scasb

	sub rdi, rbx
	mov rax, rdi
	dec rax

	pop rbx
	pop rcx
	ret

_ft_puts:
	push rsi
	push rdi
	push rdx

	cmp rdi, 0
	jz null_str

	call _ft_strlen
	mov rdx, rax
	lea rsi, [rel rdi]
	mov rdi, STDOUT
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jmp ret

	null_str:
		mov rdi, STDOUT
		lea rsi, [rel null.string]
		mov rdx, null.len
		mov rax, MACH_SYSCALL(WRITE)
		syscall

	ret:
		pop rsi
		pop rdi
		pop rdx
		ret
