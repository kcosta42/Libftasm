section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 'A'
	jl false
	cmp rdi, 'Z'
	jle true
	cmp rdi, 'a'
	jl false
	cmp rdi, 'z'
	jle true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
