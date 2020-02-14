
#
#  Apparently, the /DEBUG flag is essential for the linker
#  to produce symbol files.
#
prog.exe: main.obj func.obj
	@link $^ /out:$@ /DEBUG

func.obj: func.c func.h Makefile
	@cl -Zi -c $< -Fd:$(basename $@).pdb

main.obj: main.c func.h Makefile
	@cl -Zi -c $< -Fd:$(basename $@).pdb

clean:
	@del *.obj *.exe *.pdb *.ilk > nul
