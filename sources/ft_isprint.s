section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 0x20	; cmp rdi, 'sp'
	jl false
	cmp rdi, 0x7f	; cmp rdi, 'del'
	jl true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
