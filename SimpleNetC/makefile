
CC=g++
CFLAGS=-g
LFLAGS=

output: main.o sigmoid.o relu.o
	$(CC) main.o sigmoid.o relu.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

sigmoid.o: sigmoid.cpp
	$(CC) $(CFLAGS) -c sigmoid.cpp

relu.o: relu.cpp
	$(CC) $(CFLAGS) -c relu.cpp

clean:
	rm  *.o output