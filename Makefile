main: main.o Hangman.o tutorial.o file_save.o file_load.o
	g++ main.o Hangman.o tutorial.o file_save.o file_load.o -o main -pthread
main.o: main.cpp  conio.h
	g++ -c main.cpp
Hangman.o: Hangman.cpp conio.h
	g++ -c Hangman.cpp
tutorial.o: tutorial.cpp
	g++ -c tutorial.cpp
file_save: file_save.cpp
	g++ -c file_save.cpp
file_load.o: file_load.cpp
	g++ -c file_load.cpp
clean:
	rm *.o main
.PHONY: clean