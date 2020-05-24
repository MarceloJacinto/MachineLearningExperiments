
output: main.o sigmoid.o
	g++ main.o sigmoid.o -o output

main.o: main.cpp
	g++ -c main.cpp

sigmoid.o: sigmoid.cpp
	g++ -c sigmoid.cpp

clean:
	rm  *.o output