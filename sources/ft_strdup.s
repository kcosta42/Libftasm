section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy

_ft_strdup:
	push rbp
	mov rbp, rsp

	mov r13, rdi
	call _ft_strlen

	mov r14, rax

	mov rdi, rax
	inc rdi

	sub rsp, 16
	call _malloc
	add rsp, 16

	cmp rax, 0
	je return

	mov byte [rax + r14], 0x0

	mov rdi, rax
	mov rsi, r13
	mov rdx, r14
	call _ft_memcpy

	return:
		mov rsp, rbp
		pop rbp
		ret
