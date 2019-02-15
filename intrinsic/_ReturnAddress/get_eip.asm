;
;       https://stackoverflow.com/a/599982/180275
;
.model  flat

_TEXT  SEGMENT

_get_eip  PROC

    mov   eax, DWORD PTR 0[esp]
    ret

_get_eip ENDP

_TEXT  ENDS

END          ; END directive required at end of file
