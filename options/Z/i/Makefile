prog.exe: main.obj func.obj
	@link $^ /out:$@ /DEBUG

func.obj: func.c func.h
	@cl -Zi -c $< -Fd:$(basename $@).pdb

main.obj: main.c func.h
	@cl -Zi -c $< -Fd:$(basename $@).pdb

clean:
	@del *.obj *.exe *.pdb *.ilk > nul
