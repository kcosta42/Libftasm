section .text
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0x0
	jl false
	cmp rdi, 0x7f
	jle true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
