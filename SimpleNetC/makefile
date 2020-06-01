
CC=g++
CFLAGS=-g
LFLAGS=

output: main.o sigmoid.o relu.o log_loss.o squared_error_loss.o diff_array_size_exception.o
	$(CC) main.o sigmoid.o relu.o log_loss.o squared_error_loss.o diff_array_size_exception.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

sigmoid.o: activation_function/sigmoid.cpp
	$(CC) $(CFLAGS) -c activation_function/sigmoid.cpp

relu.o: activation_function/relu.cpp
	$(CC) $(CFLAGS) -c activation_function/relu.cpp

log_loss.o: cost_function/loss_function/log_loss.cpp
	$(CC) $(CFLAGS) -c cost_function/loss_function/log_loss.cpp

squared_error_loss.o: cost_function/loss_function/squared_error_loss.cpp
	$(CC) $(CFLAGS) -c cost_function/loss_function/squared_error_loss.cpp

diff_array_size_exception.o: diff_array_size_exception.cpp
	$(CC) $(CFLAGS) -c diff_array_size_exception.cpp

clean:
	rm  *.o output