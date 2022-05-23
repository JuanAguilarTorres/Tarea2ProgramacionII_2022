FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	cp ./personas.txt ./bin/personas.txt
	cp ./nomina.txt ./bin/nomina.txt
	cp ./horastrabajadas.txt ./bin/horastrabajadas.txt
	g++ -g -o bin/tarea2 bin/empleado.o bin/planilla.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) tests/test_.cpp -o bin/test_.o
	g++ -g -o bin/tests bin/.o -lgtest -lgtest_main -lpthread


clean:
	rm -Rf bin
