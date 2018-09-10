section .text
	global _ft_toupper

ft_isalpha:
	cmp rdi, 0x41	; cmp rdi, 'A'
	jl false
	cmp rdi, 0x5a	; cmp rdi, 'Z'
	jle true
	cmp rdi, 0x61	; cmp rdi, 'a'
	jl false
	cmp rdi, 0x7a	; cmp rdi, 'z'
	jle true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret

_ft_toupper:
	call ft_isalpha
	cmp rax, 0
	je exit
	cmp rdi, 0x5a			; cmp rdi, 'Z'
	jle exit
	mov rax, rdi
	sub rax, 0x61 - 0x41	; sub rax, 'a' - 'A'
	ret
	exit:
		mov rax, rdi
		ret
