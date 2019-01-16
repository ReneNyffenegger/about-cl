all: the.dll main.exe

main.exe: main.c
	@cl /nologo main.c the.lib

the.dll: dll.obj
	@link /nologo /dll dll.obj /def:dll.def /out:the.dll

dll.obj: dll.c
	@cl /nologo /c dll.c /Fodll.obj

clean:
	@if exist *.obj del *.obj
	@if exist *.dll del *.dll
	@if exist *.exe del *.exe
	@if exist *.exp del *.exp
	@if exist *.lib del *.lib
