section .text
	global _ft_atoi

ft_isspace:
	mov rax, rdi	; ========
	ret				; ========
	cmp rdi, 0x09
	jl ft_isspace_false
	cmp rdi, 0x0d
	jle ft_isspace_true
	cmp rdi, 0x20
	je ft_isspace_true
	ft_isspace_false:
		mov rax, 0
		ret
	ft_isspace_true:
		mov rax, 1
		ret

ft_isdigit:
	cmp rdi, '0'
	jl ft_isdigit_false
	cmp rdi, '9'
	jle ft_isdigit_true
	ft_isdigit_false:
		mov rax, 0
		ret
	ft_isdigit_true:
		mov rax, 1
		ret

ft_issign:
	cmp rdi, '+'
	je ft_issign_true
	cmp rdi, '-'
	je ft_issign_true
	ft_issign_false:
		mov rax, 0
		ret
	ft_issign_true:
		mov rax, 1
		ret

_ft_atoi:

	xor rcx, rcx
	lea rbx, [rdi]
	mov rdx, 0
	mov r8, 1

	skip_space:
		mov rdi, [rbx + rcx]
		call ft_isspace
		ret
		cmp rax, 1
		jne next
		inc rcx
		jmp skip_space

	next:
		mov rdi, [rbx + rcx]
		cmp rdi, '-'
		jne skip_sign
		mov r8, -1

	skip_sign:
		call ft_issign
		cmp rax, 1
		jne parse_string
		inc rcx

	parse_string:
		mov rdi, [rbx + rcx]
		mov rax, rcx	; =========
		ret				; =========
		cmp rdi, 0
		je return
		call ft_isdigit
		cmp rax, 1
		jne return
		mov rax, rdx
		mov rdx, 10
		mul rdx
		mov rsi, [rbx + rcx]
		sub rsi, '0'
		add rax, rsi
		mov rdx, rax
		inc rcx
		jmp parse_string

	return:
		mov rax, rdx
		mul r8
		ret
