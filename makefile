all: main

main: main.o
	gcc -g -o main main.o

main.o: main.c
	gcc -g -o main.o -c main.c

clean:
	rm main.o main

