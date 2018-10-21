all: test.o sieve.o
	gcc -o Sieve test.o sieve.o -lm

run:
	./Sieve $(args)

sieve.o: sieve.c
	gcc -c sieve.c -lm

test.o: sieve.h test.c
	gcc -c test.c
