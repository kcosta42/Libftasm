section .text
	global _ft_atoi
	extern _ft_isspace
	extern _ft_isdigit

_ft_atoi:
	mov rsi, rdi
	xor r13, r13
	mov r14, 1

	space_loop:
		movzx rdi, byte [rsi]
		call _ft_isspace
		cmp rax, 0
		je minus_sign
		inc rsi
		jmp space_loop

	minus_sign:
		cmp byte [rsi], 0x2d	; cmp [rsi], '-'
		jne plus_sign
		inc rsi
		mov r14, -1
		jmp main_loop

	plus_sign:
		cmp byte [rsi], 0x2b	; cmp [rsi], '+'
		jne	main_loop
		inc rsi

	main_loop:

		movzx rdi, byte [rsi]
		cmp	rdi, 0
		je return

		call _ft_isdigit
		cmp rax, 0
		je return

		imul r13, 10
		add r13, rdi

		sub r13, 0x30	; sub r13, '0'
		inc rsi

		jmp main_loop

	return:
		mov rax, r13
		imul rax, r14
		ret
