section .text
	global _ft_strcat

_ft_strcat:
	%strcat toto rdi, rsi
	mov rax, toto
	ret
