
CC=g++
CFLAGS=-g
LFLAGS=

output: main.o sigmoid.o
	$(CC) main.o sigmoid.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

sigmoid.o: sigmoid.cpp
	$(CC) $(CFLAGS) -c sigmoid.cpp

clean:
	rm  *.o output