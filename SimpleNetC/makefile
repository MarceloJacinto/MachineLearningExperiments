
CC=g++
CFLAGS=-g
LFLAGS=

output: main.o sigmoid.o relu.o log_loss.o squared_error_loss.o
	$(CC) main.o sigmoid.o relu.o log_loss.o squared_error_loss.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

sigmoid.o: sigmoid.cpp
	$(CC) $(CFLAGS) -c sigmoid.cpp

relu.o: relu.cpp
	$(CC) $(CFLAGS) -c relu.cpp

log_loss.o: log_loss.cpp
	$(CC) $(CFLAGS) -c log_loss.cpp

squared_error_loss.o: squared_error_loss.cpp
	$(CC) $(CFLAGS) -c squared_error_loss.cpp

clean:
	rm  *.o output