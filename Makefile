main: main.o
	g++ -o main.o main.cpp
	./main.o

clean:
	rm -f main.o
