app.exe: app.obj
	link /nodefaultlib app.obj /entry:entryFunc /subsystem:console user32.lib /out:app.exe

app.obj: app.c Makefile
	cl /nologo /c /W4 /GS- app.c
