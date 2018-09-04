section .text
	global _ft_memset

_ft_memset:
	xor rcx, rcx
	loop:
		mov [rdi + rcx], rsi
		inc rcx
		cmp rcx, rdx
		jne loop
	mov rax, rdi
	ret
