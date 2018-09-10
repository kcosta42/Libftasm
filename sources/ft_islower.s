section .text
	global _ft_islower

_ft_islower:
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
