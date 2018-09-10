section .text
	global _ft_bzero

_ft_bzero:
	push rcx

	xor rcx, rcx
	loop:
		cmp rcx, rsi
		je return
		mov byte [rdi + rcx], 0
		inc rcx
		jmp loop

	return:
		pop rcx
		ret
