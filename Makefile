all: Practica0

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

Practica0: BrazoRobotico.o main.o
	g++ -o Practica0 BrazoRobotico.o main.o

clean:
	rm -f *.o Practica0

test: all
	./Practica0
