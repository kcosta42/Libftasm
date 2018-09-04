section .text
	global _ft_bzero

_ft_bzero:
	xor rcx, rcx
	loop_start:
		mov al, 0
		mov [rdi + rcx], al
		inc rcx
		cmp rcx, rsi
		jne loop_start
	ret
