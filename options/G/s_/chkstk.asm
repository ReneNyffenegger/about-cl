;
; chkstk.asm: taken from Microsoft's Runtime chkstk.asm
;

_PAGESIZE_      equ     1000h


        CODESEG

page

public  _alloca_probe

_chkstk proc

_alloca_probe    =  _chkstk

        push    ecx

; Calculate new TOS.

        lea     ecx, [esp] + 8 - 4      ; TOS before entering function + size for ret value
        sub     ecx, eax                ; new TOS

; Handle allocation size that results in wraparound.
; Wraparound will result in StackOverflow exception.

        sbb     eax, eax                ; 0 if CF==0, ~0 if CF==1
        not     eax                     ; ~0 if TOS did not wrapped around, 0 otherwise
        and     ecx, eax                ; set to 0 if wraparound

        mov     eax, esp                ; current TOS
        and     eax, not ( _PAGESIZE_ - 1) ; Round down to current page boundary

cs10:
        cmp     ecx, eax                ; Is new TOS
        jb      short cs20              ; in probed page?
        mov     eax, ecx                ; yes.
        pop     ecx
        xchg    esp, eax                ; update esp
        mov     eax, dword ptr [eax]    ; get return address
        mov     dword ptr [esp], eax    ; and put it at new TOS
        ret

; Find next lower page and probe
cs20:
        sub     eax, _PAGESIZE_         ; decrease by PAGESIZE
        test    dword ptr [eax],eax     ; probe page.
        jmp     short cs10

_chkstk endp

        end
