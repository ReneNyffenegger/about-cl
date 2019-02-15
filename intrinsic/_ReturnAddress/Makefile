prog.exe: prog.obj get_eip.obj
	cl /nologo /Feprog.exe prog.obj get_eip.obj

prog.obj: prog.c
	cl /nologo /W4 /c prog.c

get_eip.obj: get_eip.asm
	ml /nologo /c get_eip.asm
