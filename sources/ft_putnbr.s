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
	push rdi

	call ft_dcount
	mov r13, rax

	pop rdi

	mov r15, 0x01
	mov r14, 0x0A

	loop_digits:
		dec r13
		cmp r13, 0x0
		jle loop_power

		imul r15, 0x0A
		jmp loop_digits

	loop_power:
		mov r12, rdi

		mov rax, r12
		xor rdx, rdx
		idiv r15
		mov r12, rax

		push rdi

		add r12, 0x30 ; add r12, '0'
		mov rdi, r12
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
