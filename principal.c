#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "pantalla.h"
#include "gestion_juego.h"
#include "idiomas.h"

//#include "gestion.h"
#define JUGAR '1'
#define PROBAR '2'
#define NIVEL '3'
#define LISTAR '4'
#define GUARDAR '5'
#define IDIOMA '6'
#define SALIR '0'

int main(){

  char opcion[800];
  int error;
  int error2;
  int dificultad;
  int *lives;
  int *vez;
 // char accion;
  int *lenguaje;
  lives=malloc(80*sizeof(int));
  *lives=100;
  vez=malloc(80*sizeof(int));
  *vez=0;
  lenguaje=malloc(80*sizeof(int));
  *lenguaje=0;



pantalla();
  
do{  

error=0;
  
  if(*vez==0){
     menu_nguardar(lenguaje);
  }
  else{
    menu_guardar(lenguaje);
  }
	
fscanf(stdin," %s", opcion);
 if(strlen(opcion)!=1)opcion[0]=7;

 error=0;

 switch (opcion[0]) {

 case SALIR: { //salir

  /* do{
     printf("\nEsta seguro de que desea salir? (s/n):");
     scanf(" %c", &accion);

     while(tolower(accion) != 's' && tolower(accion) != 'n'){
       printf("\nLa respuesta no es correcta, introduzca (s/n):");
       scanf(" %c", &accion);
     }
     if(tolower(accion)=='n'){
       error=1;
       break;
     }
   }while(tolower(accion) == 'n'); */
   break; 
 }

 case JUGAR : {
   //  fprintf(stdout," \nHas seleccionado Jugar partida\n\n");
   dificultad=0;
   error=1;
   *vez=1;
   jugar_partida(dificultad, lives, lenguaje); //MODO NORMAL DE JUEGO
   break;
 }
 case PROBAR: {
   // fprintf(stdout," \nHas seleccionado Jugar partida de prueba\n\n");
   dificultad=1;
   jugar_partida(dificultad, lives, lenguaje);
   error=1;
   break;
 }
 case NIVEL: {
   //  fprintf(stdout," \nHas seleccionado establecer nivel de dificultad\n\n");
   error=1;
   establecer_nivel(error, lives, lenguaje); //MODIFICAMOS EL NUMERO DE OPORTUNIDADES Y VOLVEMOS A LANZAR EL MENU DE OPCIONES
    
   break;
 }
 case LISTAR: {
   // fprintf(stdout,"\nHas seleccionado listar historial de partidas\n\n");
     listar_historial(lenguaje);
     error=1;
   break;
 }
 case GUARDAR: {
break;
}
 case IDIOMA: {
   do{
     error2=0;
     idioma(lenguaje);
     if(*lenguaje!=0 && *lenguaje!=1 && *lenguaje!=2){
       error2=1;
       imprimir(24, lenguaje);
     }
   }while(error2==1);
   error=1;
break;
}
 default : {
   //fprintf(stdout," \nOpcion no valida\n\n");
   imprimir(1, lenguaje);
   error=1;
   break;
 }
 }
 }while (error == 1 );
 return 0;


}
