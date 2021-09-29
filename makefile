output: main.o LiczbyPierwsze.o
	g++ main.o LiczbyPierwsze.o -o output

main.o: main.cpp
	g++ -c main.cpp

LiczbyPierwsze.o: LiczbyPierwsze.cpp
	g++ -c LiczbyPierwsze.cpp

clean:
	rm *.o