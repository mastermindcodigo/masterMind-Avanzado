//IDIOMAS

#include <stdio.h>
#include <stdlib.h>

void imprimir(int fila, int *columna){

  char *espanhol[24][3]={  //OPCIONES DE MENU

    /*1*/   {" \nHas realizado una selecci�n no v�lida\n\n", " \nRealizaches unha selecci�n non v�lida\n\n ", " \nYou have made an invalid selection\n\n"},
    /*2*/  {"Hay una partida sin guardar, �descartarla? (s/n) ", "Hai unha partida sen gardar, descartala? (s/n) ", "There is an unsaved game, discard it? (y/n) "},
    /*3*/  {"\nHay una partida sin guardar, �est� seguro de que desea salir?(s/n) ","\nHai unha partida sen gardar, est� seguro de que desexa sa�r?(s/n) ","\nThere is an unsaved game, are you sure you want to quit?(y/n) "},
    //FUNCION JUGAR PARTIDA
    /*4*/   {"\nEscriba un n�mero de 4 d�gitos diferentes + ENTER: ", "\nEscriba un n�mero de 4 d�xitos diferentes + ENTER: ", "\nType a number with 4 different digits + ENTER: "},
    /*5*/  {"\nLa longitud de la apuesta es incorrecta","\nA lonxitude da aposta non � correcta","\nYou have not typed 4 digits"},//erro de longitud
    /*6*/ {"\nLa apuesta s�lo debe contener d�gitos","\nA aposta s� debe conter d�xito","\nThe guess can only contain digits"},
    /*7*/ {"Los d�gitos de la apuesta deben ser diferentes","\nOs d�xitos da apuesta deben ser diferentes","\nThe guess digits must be different"},
    /*8*/   {"\nSu apuesta es: < ","\nA s�a aposta �: <","\nYour guess:"},
    /*9*/ {"\n\nHa descubierto el c�digo secreto (","\n\nDescubriu o c�digo secreto (","\n\nYou have discovered the secret code ("},
    /*10*/{") en ",") en ",") in "},
    /*11*/ {" intentos"," intentos"," attemps"},
    /*12*/ {"\n\nNO ha descubierto el c�digo secreto (","\n\nNON descubriu o c�digo secreto (","\n\nYou have FAILED to discover the secret code"},
    /*13*/ {" intentos"," intentos"," attemps"},
    /*14*/ {" intento"," intento"," attemp"},
    /*15*/{"\nHa obtenido ","\nObtivo ","\nYou have got "},
    /*16*/{" puntos\n"," puntos\n"," points\n"},
    /*17*/  {") tras ",") tras",") after"},
    //FUNCION ESTABLECER NIVEL
    /*18*/{"\nNivel actual: ","\nNivel actual: ","\n Current level: "},
    /*19*/{"\nElige nuevo nivel [1..100]:","\nElixe novo nivel[1..100]:","\nSelect new level [1..100]:"},
    /*20*/{"\nNivel seleccionado: ","\nNivel seleccionado","\nSelected level\n"},
    /*21*/{"\nNivel seleccionado no valido\n","\nNivel seleccionado non v�lido\n","\nYou have selected an invalid level\n"},
    //FUNCION LISTAR HISTORIAL
    /*22*/{"\nNo puedo leer el fichero del historial\n","\nNon podo ler o ficheiro de historial\n","\nHistory file can't be read\n"},
    /*23*/{"\nNo puedo escribir en el fichero de historial\n","\nNon podo escribir no ficheiro de historial\n","\nHistory file can't be written\n"},
    /*24*/{"\nIdioma seleccionado no v�lido","\nIdioma seleccionado non v�lido","\nSelected language is not allowed"}};

  printf("%s", espanhol[fila-1][*(columna)]);
}

