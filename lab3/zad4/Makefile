# Makefile

CC = clang
CFLAGS = -Wextra 

all : main

main: main.o newagent.o north.o south.o west.o east.o distance.o
	$(CC) $(CFLAGS) -o $@ $^ -lm
%.o: %.c 
	$(CC) $(CFLAGS) -c $^

clean: 
	rm -f main *.o