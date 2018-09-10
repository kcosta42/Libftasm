section .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, 0x30	; cmp rdi, '0'
	jl false
	cmp rdi, 0x39	; cmp rdi, '9'
	jle true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
