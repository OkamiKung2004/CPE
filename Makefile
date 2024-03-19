APPEND = test

all : main.o ChainNode.o
	g++ main.o ChainNode.o -o $(APPEND)

main.o : main.cpp
	g++ -c main.cpp -o main.o

ChainNode.o : ChainNode.cpp
	g++ -c ChainNode.cpp -o ChainNode.o

clean :
	rm main.o ChainNode.o $(APPEND)
	clear