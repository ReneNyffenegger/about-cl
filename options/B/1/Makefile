#
# https://stackoverflow.com/a/3672331/180275
# https://www.geoffchappell.com/studies/msvc/cl/cl/options/b1.htm
#

prog.obj: prog.c cl-frontend.exe
	@cl /B1cl-frontend /c prog.c /Foprog.obj

cl-frontend.exe: cl-frontend.c Makefile
	@cl cl-frontend.c

clean:
	@del *.obj *.exe
