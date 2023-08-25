	global	main
	  extern   printf
main:
	mov	edi,	format
	xor	rax,	rax
	call	printf
	mov	rax,	0
	ret
format	db "Hello, Holberton", 0
