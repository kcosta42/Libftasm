section .text
	global _ft_isspace

_ft_isspace:
	cmp rdi, 0x09
	jl false
	cmp rdi, 0x0d
	jle true
	cmp rdi, 0x20
	je true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
