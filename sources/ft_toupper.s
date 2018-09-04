section .text
	global _ft_toupper

ft_isalpha:
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

_ft_toupper:
	call ft_isalpha
	cmp rax, 0
	je exit
	cmp rdi, 'Z'
	jle exit
	mov rax, rdi
	sub rax, 'a' - 'A'
	ret
	exit:
		mov rax, rdi
		ret
