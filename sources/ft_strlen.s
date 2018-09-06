section .text
	global _ft_strlen

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
