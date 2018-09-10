section .text
	global _ft_isupper

_ft_isupper:
	cmp rdi, 0x41	; cmp rdi, 'A'
	jl false
	cmp rdi, 0x5a	; cmp rdi, 'Z'
	jle true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
