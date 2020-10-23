all: test.o
	gcc -o test test.o
test1.o: test.c
	gcc -c test.c