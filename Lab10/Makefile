CC = gcc
CFLAGS = -Wall
LDLIBS = -lm
all: gra
gra: main.o liczba.o oczko.o
	$(CC) $(CFLAGS) -o gra main.o liczba.o oczko.o

main.o: main.c opcje.h
	$(CC) $(CFLAGS) -c main.c
liczba.o: liczba.c opcje.h
	$(CC) $(CFLAGS) -c liczba.c
oczko.o: oczko.c opcje.h
	$(CC) $(CFLAGS) -c oczko.c

