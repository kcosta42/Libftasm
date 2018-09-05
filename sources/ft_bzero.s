section .text
	global _ft_bzero

_ft_bzero:
	push rcx

	xor rcx, rcx
	loop:
		mov byte [rdi + rcx], 0
		inc rcx
		cmp rcx, rsi
		jne loop

	pop rcx
	ret
