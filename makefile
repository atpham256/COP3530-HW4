all:
	make hw4
hw4: hw4.o
	g++ -g -Wall -o hw4 hw4.o
hw4.o: hw4.cpp
	g++ -g -Wall -c hw4.cpp
clean:
	rm *.o hw4
