all: lower.o lowercase.o
	cc -o lower lower.o lowercase.o


lower.o: lower.c
	cc -c lower.c


lowercase.o: lowercase.c lowercase.h
	cc -c lowercase.c


clean:
	rm *.o
	rm lower
