section .text
	global _ft_strcpy
	extern _ft_strlen

_ft_strcpy:
	push rdi
	mov rdi, rsi

	call _ft_strlen

	pop rdi
	mov rcx, rax

	mov rax, rdi
	rep movsb

	ret
