# Début du make file
# Déclaration des macros

CC = g++
CFLAGS = -g -Wall

all : exec

main.o : main.cpp baie.h conteneur.h pile.h constantes.h
	$(CC) -o main.o -c main.cpp $(CFLAGS)

conteneur.o : conteneur.cpp conteneur.h constantes.h
	$(CC) -o conteneur.o -c conteneur.cpp $(CFLAGS)

pile.o : pile.cpp pile.h conteneur.h constantes.h
	$(CC) -o pile.o -c pile.cpp $(CFLAGS)

baie.o : baie.cpp baie.h pile.h conteneur.h constantes.h
	$(CC) -o baie.o -c baie.cpp $(CFLAGS)


exec : main.o conteneur.o pile.o baie.o
	$(CC) -o exec main.o conteneur.o pile.o baie.o


clean :
	rm -f *.o core

mrproper : clean
	rm-f $(EXEC)