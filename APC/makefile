src:= $(wildcard *.c)
obj:= $(patsubst %c, %o, $(src))
output.exe: $(obj)
	gcc -o $@ $(obj) -Wall
clean:
	 rm *.o *.exe

