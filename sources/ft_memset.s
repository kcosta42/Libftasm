section .text
	global _ft_memset

_ft_memset:
	xor rcx, rcx
	loop_start:
		mov [rdi + rcx], rsi
		inc rcx
		cmp rcx, rdx
		jne loop_start
	mov rax, rdi
	ret
