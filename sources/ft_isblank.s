section .text
	global _ft_isblank

_ft_isblank:
	cmp rdi, 0x20	; cmp rdi, 'sp'
	je true
	cmp rdi, 0x09	; cmp rdi, 'ht'
	je true
	false:
		mov rax, 0
		ret
	true:
		mov rax, 1
		ret
