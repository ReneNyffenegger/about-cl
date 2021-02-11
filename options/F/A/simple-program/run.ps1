$hostDir = (get-item ( where.exe cl.exe ) ).directory.parent.fullname

& "$hostDir\x64\cl.exe" simple-program.c /c /FA /Faoutput.x64.asm
& "$hostDir\x86\cl.exe" simple-program.c /c /FA /Faoutput.x86.asm

& "$hostDir\x64\cl.exe" simple-program.c /c /FAc /Faoutput.c.x64.asm
& "$hostDir\x86\cl.exe" simple-program.c /c /FAc /Faoutput.c.x86.asm

& "$hostDir\x64\cl.exe" simple-program.c /c /FAs /Faoutput.s.x64.asm
& "$hostDir\x86\cl.exe" simple-program.c /c /FAs /Faoutput.s.x86.asm

& "$hostDir\x64\cl.exe" simple-program.c /c /FAu /Faoutput.u.x64.asm
& "$hostDir\x86\cl.exe" simple-program.c /c /FAu /Faoutput.u.x86.asm
