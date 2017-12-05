all: main

main.o: main.c functions.c header.h
	gcc -c main.c
demo: main.o
	gcc -o demo main.o
clean:
	rm -f *.o main