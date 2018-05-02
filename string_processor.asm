; FUNCIONES de C
	extern malloc
	extern free
	extern fopen
	extern fclose
	extern fprintf

; /** defines bool y puntero **/
	%define NULL 0
	%define TRUE 1
	%define FALSE 0
;	Offsets:
	%define offset_string_proc_list_name 0
	%define offset_string_proc_list_first 8
	%define offset_string_proc_list_last 16

;	Sizes:
	%define size_string_proc_func 8
	%define size_string_proc_func_type 1
	%define size_string_proc_node 33   
	%define size_string_proc_list 24
	

section .data


section .text

global string_proc_list_create
; rdi contiene char* name
string_proc_list_create:
	push rbp
	mov rbp, rsp
	push rbx
	push r8
	mov rbx, rdi
	xor rdi, rdi
	mov rdi, size_string_proc_list
	call malloc
	mov r8, rax
	mov rdi, rbx
	call str_copy
	mov [rbx + offset_string_proc_list_name], rax
	mov [rbx + offset_string_proc_list_last], NULL
	mov [rbx + offset_string_proc_list_first], NULL
	mov rdi, rbx
	pop r8
	pop rbx
	pop rbp
	ret

global string_proc_node_create
string_proc_node_create:
	ret

global string_proc_key_create
string_proc_key_create:
	ret

global string_proc_list_destroy
string_proc_list_destroy:
	ret

global string_proc_node_destroy
string_proc_node_destroy:
	ret

global string_proc_key_destroy
string_proc_key_destroy:
	ret

global string_proc_list_add_node
string_proc_list_add_node:
	ret

global string_proc_list_apply
string_proc_list_apply:
	ret
