all: gsOK.exe gsFail.exe gsOk_2.exe


gsOK.exe:   $(@B).obj
	link /nologo $** /subsystem:console /entry:start /nodefaultlib user32.lib kernel32.lib            /OUT:$@

gsFail.exe: $(@B).obj
	link /nologo $** /subsystem:console /entry:start /nodefaultlib user32.lib kernel32.lib            /OUT:$@

gsOK_2.exe: $(@B).obj
	link /nologo $** /subsystem:console /entry:start /nodefaultlib user32.lib kernel32.lib chkstk.obj /OUT:$@

gsOK.obj:   gs.c
	cl /nologo /GS-            /c /W4 /DBUFSIZE=20     $** /Fo$@

gsFail.obj: gs.c
	cl /nologo /GS- /Gs1000000 /c /W4 /DBUFSIZE=200000 $** /Fo$@

gsOk_2.obj: gs.c
	cl /nologo /GS-            /c /W4 /DBUFSIZE=200000 $** /Fo$@

chkstk.obj: chkstk.asm
	ml $** /Fo$@

clean:
	del *.obj *.exe
