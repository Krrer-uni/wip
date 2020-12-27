# Makefile

all: main

main: main.o f.o solve.o
	clang -o main main.o f.o solve.o -lm

main.o: main.c
	clang -c main.c

f.o: f.c
	clang -c f.c 

solve.o: solve.c
	clang -c solve.c

clean:
	rm -f main *.o *~