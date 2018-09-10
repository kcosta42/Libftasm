section .text
	global _ft_isalnum

_ft_isalnum:
	cmp rdi, 0x30	; cmp rdi, '0'
	jl false
	cmp rdi, 0x39	; cmp rdi, '9'
	jle true
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
