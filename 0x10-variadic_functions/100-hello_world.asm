section .data
	text db 'Hello, World',0xa
section .text
	global main 
main:
	mov ebx,1
	mov ecx,text
	mov edx,17
	mov eax,4
	int 0x80
	mov eax,0
	int 0x80
