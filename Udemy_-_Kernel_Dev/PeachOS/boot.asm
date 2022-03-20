ORG 0X7c00
BITS 16

start:
	mov si, message	;Move address of message to si register
	call print
	jmp $		;Jump back to this line indefinitely. 
				;Else, the program will try to execute the instructions below

print:
	mov bx, 0	;Page number
.loop:
	lodsb
	cmp al, 0
	je .done
	call print_char
	jmp .loop	
.done:
	ret

print_char:
	mov ah, 0eh	;Teletype/terminal output
	int 0x10	;Calling BIOS routine to print to terminal
	ret
	

message: db 'Hello, World!', 0

times 510-($-$$) db 0	;Pad up to 510 bytes, filling up to 0 if no byte is present
dw 0xAA55		;Little endian order of boot end

