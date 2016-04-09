#****************************************************#
# ****** Compilacion del proyecto MASTER MIND ****** #
#****************************************************#

CC = gcc -Wall

all: principal pantalla.o gestion_juego.o jugar_partida_normal.o idiomas.o

LIBS:

pantalla.o: pantalla.c pantalla.h
	$(CC) -c pantalla.c

gestion_juego.o: gestion_juego.c gestion_juego.h
	$(CC) -c gestion_juego.c

jugar_partida_normal.o: jugar_partida_normal.c gestion_juego.h
	$(CC) -c jugar_partida_normal.c

idiomas.o: idiomas.c idiomas.h
	$(CC) -c idiomas.c

principal: principal.c pantalla.o gestion_juego.o jugar_partida_normal.o idiomas.o
	$(CC) -o  principal principal.c pantalla.o gestion_juego.o jugar_partida_normal.o idiomas.o $(LIBS)

clean: 
	rm -f principal *.o *~ *.bak


