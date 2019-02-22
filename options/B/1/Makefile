prog.obj: prog.c cl-frontend.exe
	@cl /B1cl-frontend /c prog.c /Foprog.obj

cl-frontend.exe: cl-frontend.c Makefile
	@cl cl-frontend.c

clean:
	@del *.obj *.exe
