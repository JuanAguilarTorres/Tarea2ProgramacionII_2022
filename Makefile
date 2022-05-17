FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tarea2 bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) tests/test_.cpp -o bin/test_.o
	g++ -g -o bin/tests bin/.o -lgtest -lgtest_main -lpthread


clean:
	rm -Rf bin
