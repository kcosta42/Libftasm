section .text
	global _ft_strcat

_ft_strcat:
	push rbx

	mov rax, rdi
	mov rbx, rsi
	xor rcx, rcx

	first_string:
		cmp byte [rdi], 0
		je second_string
		inc rdi
		jmp first_string

	second_string:
		cmp byte [rbx], 0
		je return
		inc rbx
		inc rcx
		jmp second_string

	return:
		inc rcx
		rep movsb

		pop rbx
		ret
