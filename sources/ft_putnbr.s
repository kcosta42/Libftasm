section .text
	extern _ft_putchar
	global _ft_putnbr

ft_dcount:

	xor rcx, rcx

	cmp rdi, 0x0
	je ret_zero

	mov r14, 0x0A

	loop_dcount:
		inc rcx

		mov rax, rdi
		xor rdx, rdx
		idiv r14
		mov rdi, rax

		cmp rdi, 0x0
		je return

		jmp loop_dcount

	ret_zero:
		inc rcx

	return:
		mov rax, rcx
		ret


_ft_putnbr:

	call ft_dcount
	mov rcx, rax

	mov r15, 0x01
	mov r14, 0x0A

	loop_digits:
		cmp rcx, 0x0
		jle next
		dec rcx

		imul r15, 0x0A
		jmp loop_digits

	next:
		cmp rdi, 0x0
		jl put_sign
		jmp loop_power

	put_sign:
		push rdi
		mov rdi, 0x2d ; mov rdi, '-'
		call _ft_putchar
		pop rdi
		imul rdi, -1

	loop_power:
		push rdi

		mov rax, rdi
		xor rdx, rdx
		idiv r15
		mov rdi, rax

		add rdi, 0x30 ; add rdi, '0'
		call _ft_putchar

		pop rdi

		mov rax, rdi
		xor rdx, rdx
		idiv r15
		mov rdi, rdx

		mov rax, r15
		xor rdx, rdx
		idiv r14
		mov r15, rax

		cmp r15, 0x0
		jg loop_power

	ret
