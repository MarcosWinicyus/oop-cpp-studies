all: 	pessoa.o main.o
	g++ -o main pessoa.o main.o

pessoa.o:	pessoa.cpp pessoa.hpp
	g++ -c pessoa.cpp

main.o: 	main.cpp pessoa.hpp
	g++ -c main.cpp

clean:
	rm -rf *.o

vai:
	./main
