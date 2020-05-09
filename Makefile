main: main.o
	g++ -o main.o main.cpp
	echo "--- compiled ---"
	./main.o

clean:
	rm -f main.o
