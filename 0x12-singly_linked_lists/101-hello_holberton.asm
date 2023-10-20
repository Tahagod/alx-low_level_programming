section		.text
	extern	printf
	global	main

main:
	mov		edi, abc
	mov		eax, 0
	call	printf

section		.data
	abc db "Hello, Holberton", 0xa, 0
