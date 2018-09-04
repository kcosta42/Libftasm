section .text
	global _ft_memcpy

_ft_memcpy:
	mov rax, rdi
	xor rcx, rcx
	loop:
		add rdi, rcx
		add rsi, rcx
		mov rdi, rsi
		inc rcx
		cmp rcx, rdx
		jne loop
	ret
