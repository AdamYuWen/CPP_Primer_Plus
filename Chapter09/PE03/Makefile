main: main.o placementnew.o
	g++ -o PE03 main.o placementnew.o

main.o: main.cpp placementnew.h
	g++ -c main.cpp

placementnew.o:	placementnew.cpp placementnew.h
	g++ -c placementnew.cpp