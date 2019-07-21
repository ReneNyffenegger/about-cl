prog.exe: main.o func.o
	@cl /nologo main.obj func.obj /Feprog.exe

main.o : main.c func.h
	@cl /nologo /c main.c         /Fomain.obj

func.o : func.c func.h
	@cl /nologo /c func.c         /Fofunc.obj
