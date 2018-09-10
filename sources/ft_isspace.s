section .text
	global _ft_isspace

_ft_isspace:
	cmp rdi, 0x09	; cmp rdi, 'ht'
	jl false
	cmp rdi, 0x0d	; cmp rdi, 'cr'
	jle true
	cmp rdi, 0x20	; cmp rdi, 'sp'
	je true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
